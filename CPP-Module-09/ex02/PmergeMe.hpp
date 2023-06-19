/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barimehdi77 <barimehdi77@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:46:03 by barimehdi77       #+#    #+#             */
/*   Updated: 2023/06/19 14:02:30 by barimehdi77      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <fstream>
#include <algorithm>
#include <time.h>

#define MIN_NUMBER_OF_ELEMENT 3

class PmergeMe
{
	private:
		std::vector<int> _vec;
		std::list<int> _list;
		bool pushNumberToContainers(int number);
		void insertionSortVector(int first, int last);
		void mergeSortVector(int first, int last);
		void mergeVector(int first, int mid, int last);
		void insertionSortList(int first, int last);
		void mergeSortList(int first, int last);
		void mergeList(int first, int mid, int last);
	public:
		PmergeMe();
		PmergeMe( const PmergeMe & src );
		~PmergeMe();
		PmergeMe & operator = ( const PmergeMe & rhs );
		std::vector<int> getVector() const;
		std::list<int> getList() const;
		void parseArgs(char** args);
		std::list<int>::iterator list_at(int index);

};
