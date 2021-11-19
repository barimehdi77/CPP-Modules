/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <mbari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:33:31 by mbari             #+#    #+#             */
/*   Updated: 2021/11/19 18:37:20 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"


int main()
{
		std::cout << "*******************|Test the Stack using INT|********************\n";
	{
		MutantStack<int> mstack;
		mstack.push(77);
		mstack.push(17);
		std::cout << "-------------------|print The first element of the stack|--------------------\n";
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "-------------------|print The Size of the stack|--------------------\n";
		std::cout << mstack.size() << std::endl;
		mstack.push(69);
		mstack.push(3);
		mstack.push(777);
		mstack.push(7);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << "-------------------|print bigin and end of stack using iterators|--------------------\n";
		std::cout << "begin " << *it << std::endl;
		std::cout << "end " << *ite << std::endl;
		std::cout << "-------------------|Test if ++ work with iterator|--------------------\n";
		++it;
		std::cout << "begin " << *it << std::endl;
		std::cout << "end " << *ite << std::endl;
		std::cout << "-------------------|Test if -- work with iterator|--------------------\n";
		--it;
		std::cout << "begin " << *it << std::endl;
		std::cout << "end " << *ite << std::endl;
		std::cout << "-------------------|print The Content of the stack Using iterators|--------------------\n";
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "-------------------|print The Size of the stack|--------------------\n";
		std::cout << mstack.size() << std::endl;
		std::stack<int> s(mstack);
	}
		std::cout << "*******************|Test the Stack using string|********************\n";
	{
		MutantStack<std::string> mstack;
		mstack.push("Bari");
		mstack.push("Mehdi");
		std::cout << "-------------------|print The first element of the stack|--------------------\n";
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "-------------------|print The Size of the stack|--------------------\n";
		std::cout << mstack.size() << std::endl;
		mstack.push("Mehdi");
		mstack.push("77");
		mstack.push("Intra");
		mstack.push("CPP-Moudle-08");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		std::cout << "-------------------|print bigin and end of stack using iterators|--------------------\n";
		std::cout << "begin " << *it << std::endl;
		std::cout << "end " << *ite << std::endl;
		std::cout << "-------------------|Test if ++ work with iterator|--------------------\n";
		++it;
		std::cout << "begin " << *it << std::endl;
		std::cout << "end " << *ite << std::endl;
		std::cout << "-------------------|Test if -- work with iterator|--------------------\n";
		--it;
		std::cout << "begin " << *it << std::endl;
		std::cout << "end " << *ite << std::endl;
		std::cout << "-------------------|print The Content of the stack Using iterators|--------------------\n";
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "-------------------|print The Size of the stack|--------------------\n";
		std::cout << mstack.size() << std::endl;
		std::stack<std::string> s(mstack);
	}
	return 0;
}
