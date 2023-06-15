/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barimehdi77 <barimehdi77@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:06:42 by barimehdi77       #+#    #+#             */
/*   Updated: 2023/06/15 10:32:47 by barimehdi77      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <fstream>


class RPN
{
	private:
		std::stack<int> _stack;
	public:
		RPN();
		RPN( const RPN & src );
		~RPN();
		RPN & operator = ( const RPN & rhs );
		std::stack<int> getStack() const;
		bool isOperator(char op);
		void parseArg(std::string arg);
};
