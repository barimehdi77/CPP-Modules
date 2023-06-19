/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barimehdi77 <barimehdi77@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:11:57 by barimehdi77       #+#    #+#             */
/*   Updated: 2023/06/15 16:11:46 by barimehdi77      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN & src): _stack(src._stack) {
	*this = src;
}

RPN::~RPN() {}

RPN &RPN::operator=(const RPN & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_stack = rhs._stack;
	return (*this);

}

std::stack<int> RPN::getStack() const {return this->_stack; }

bool RPN::isOperator(char op)
{
	return (op == '*' || op == '/' || op == '-' || op == '+');
}

void RPN::parseArg(std::string arg)
{
	int i = 0;

	while (arg[i]) {
		if ((i == 0 && !isdigit(arg[i]))
			|| (isdigit(arg[i]) && arg[i + 1] != ' ')
				|| (this->isOperator(arg[i]) && arg[i + 1] != ' ' && arg[i + 1] != 0))
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		else if (isOperator(arg[i]) && this->_stack.size() < 2)
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		if (isdigit(arg[i]))
			this->_stack.push(arg[i] - '0');
		else if (isOperator(arg[i]) && this->_stack.size() >= 2) {
			int second = this->_stack.top();
			this->_stack.pop();
			int first = this->_stack.top();
			this->_stack.pop();
			int result = 0;
			if (arg[i] == '*')
				result = first * second;
			else if (arg[i] == '/')
				result = first / second;
			else if (arg[i] == '-')
				result = first - second;
			else if (arg[i] == '+')
				result = first + second;
			this->_stack.push(result);
		}
		i++;
	}
	if (this->_stack.size() == 1)
		std::cout << this->_stack.top() << std::endl;
	else
		std::cout << "Error" << std::endl;
}
