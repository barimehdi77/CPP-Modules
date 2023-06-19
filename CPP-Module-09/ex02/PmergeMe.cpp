/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barimehdi77 <barimehdi77@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:51:20 by barimehdi77       #+#    #+#             */
/*   Updated: 2023/06/19 15:12:44 by barimehdi77      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &src) : _vec(src._vec), _list(src._list)
{
	*this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_vec = rhs._vec;
	this->_list = rhs._list;
	return (*this);
}

std::vector<int> PmergeMe::getVector() const { return this->_vec; }

std::list<int> PmergeMe::getList() const { return this->_list; }

std::list<int>::iterator PmergeMe::list_at(int index)
{
	std::list<int>::iterator it = _list.begin();
	int i = 0;
	while (it != _list.end() && i < index)
	{
		i++;
		it++;
	}
	return it;
}

void PmergeMe::parseArgs(char **args)
{
	int i = 1;
	while (args[i])
	{
		int j = 0;
		while (args[i][j])
		{
			if (!isdigit(args[i][j]))
			{
				std::cout << "Error: input should be integer!" << std::endl;
				exit(1);
			}
			j++;
		}
		if (!this->pushNumberToContainers(std::stoi(args[i])))
		{
			std::cout << "Error: duplicated number!" << std::endl;
			exit(1);
		}
		i++;
	}
	std::cout << "Before: ";
	for (int i = 0; i < this->_vec.size(); i++)
		std::cout << this->_vec.at(i) << ' ';
	std::cout << std::endl;
	clock_t vectorStartTiming = clock();
	this->mergeSortVector(0, this->_vec.size() - 1);
	std::cout << "After: ";
	for (int i = 0; i < this->_vec.size(); i++)
		std::cout << this->_vec.at(i) << ' ';
	std::cout << std::endl;
	clock_t listStartTiming = clock();
	this->mergeSortList(0, this->_list.size() - 1);
	std::cout << "Time to process a range of " << this->_vec.size() << " elements with std::vector : " << (double)(clock() - vectorStartTiming) / (CLOCKS_PER_SEC / 1000000) << " us" << std::endl;
	std::cout << "Time to process a range of " << this->_list.size() << " elements with std::list : " << (double)(clock() - listStartTiming) / (CLOCKS_PER_SEC / 1000000) << " us" << std::endl;
}

bool PmergeMe::pushNumberToContainers(int number)
{
	bool foundInList = std::find(this->_list.begin(), this->_list.end(), number) != this->_list.end();
	bool foundInVec = std::find(this->_vec.begin(), this->_vec.end(), number) != this->_vec.end();

	if (foundInList || foundInVec)
	{
		return false;
	}
	else
	{
		this->_list.push_back(number);
		this->_vec.push_back(number);
		return true;
	}
}

void PmergeMe::mergeSortVector(int first, int last)
{
	if (last - first > MIN_NUMBER_OF_ELEMENT)
	{
		int mid = (first + last) / 2;
		this->mergeSortVector(first, mid);
		this->mergeSortVector(mid + 1, last);
		this->mergeVector(first, mid, last);
	}
	else
	{
		insertionSortVector(first, last);
	}
}

void PmergeMe::mergeVector(int first, int mid, int last)
{
	int n1 = mid - first + 1;
	int n2 = last - mid;
	int temp[last - first + 1];
	int RIDX = mid + 1; // Index for the right subarray
	int LIDX = first;	// Index for the left subarray
	int i = 0;			// Index for the temporary array temp

	while (LIDX <= mid && RIDX <= last)
	{
		if (this->_vec[LIDX] <= this->_vec[RIDX])
		{
			temp[i++] = this->_vec[LIDX++];
		}
		else
		{
			temp[i++] = this->_vec[RIDX++];
		}
	}

	while (LIDX <= mid)
	{
		temp[i++] = this->_vec[LIDX++];
	}

	while (RIDX <= last)
	{
		temp[i++] = this->_vec[RIDX++];
	}

	std::copy(temp, temp + (last - first + 1), this->_vec.begin() + first);
}

void PmergeMe::insertionSortVector(int first, int last)
{
	for (int i = first; i < last; i++)
	{
		int temp = this->_vec[i + 1];
		int j = i + 1;
		while (j > first && this->_vec[j - 1] > temp)
		{
			this->_vec[j] = this->_vec[j - 1];
			j--;
		}
		this->_vec[j] = temp;
	}
}

// list functions

void PmergeMe::mergeSortList(int first, int last)
{
	if (last - first > MIN_NUMBER_OF_ELEMENT)
	{
		int mid = (first + last) / 2;
		this->mergeSortList(first, mid);
		this->mergeSortList(mid + 1, last);
		this->mergeList(first, mid, last);
	}
	else
	{
		insertionSortList(first, last);
	}
}

void PmergeMe::mergeList(int first, int mid, int last)
{
	int leftSubListSize = mid - first + 1;
    int rightSubListSize = last - mid;

    int leftSubList[leftSubListSize];
    int rightSubList[rightSubListSize];

    std::copy(this->list_at(first), this->list_at(mid + 1), leftSubList);
    std::copy(this->list_at(mid + 1), this->list_at(last + 1), rightSubList);

    int rInx = 0;
    int lInx = 0;
    int i = first;

    while (rInx < rightSubListSize && lInx < leftSubListSize) {
        if (rightSubList[rInx] > leftSubList[lInx]) {
            *(this->list_at(i)) = leftSubList[lInx++];
        } else {
            *(this->list_at(i)) = rightSubList[rInx++];
        }
        i++;
    }

    while (lInx < leftSubListSize) {
        *(this->list_at(i)) = leftSubList[lInx++];
        i++;
    }

    while (rInx < rightSubListSize) {
        *(this->list_at(i)) = rightSubList[rInx++];
        i++;
    }

}

void PmergeMe::insertionSortList(int first, int last)
{
	for (int i = first; i < last; i++)
	{
		int temp = *(this->list_at(i + 1));
		int j = i + 1;
		while (j > first && *(this->list_at(j - 1)) > temp)
		{
			*(this->list_at(j)) = *(this->list_at(j - 1));
			j--;
		}
		*(this->list_at(j)) = temp;
	}
}
