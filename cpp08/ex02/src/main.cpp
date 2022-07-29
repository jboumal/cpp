/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboumal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:46:55 by jboumal           #+#    #+#             */
/*   Updated: 2022/07/22 13:46:57 by jboumal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <algorithm>

void	my_print(float el)
{
	std::cout << el << std::endl;
}

int main ( void )
{
	std::cout << "subject tests" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "---------------------" << std::endl;
	std::cout << "subject tests with list" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << "---------------------" << std::endl;
	std::cout << "additional tests" << std::endl;
	{
		MutantStack<float> mstack;
		mstack.push(1.5);
		mstack.push(-1.5);
		mstack.push(9);
		mstack.push(0);
		mstack.push(42.0);
		mstack.push(-999);
		for_each (mstack.begin(), mstack.end(), my_print);
	}
	std::cout << "---------------------" << std::endl;
	std::cout << "additional tests with lists" << std::endl;
	{
		std::list<float> mstack;
		mstack.push_back(1.5);
		mstack.push_back(-1.5);
		mstack.push_back(9);
		mstack.push_back(0);
		mstack.push_back(42.0);
		mstack.push_back(-999);
		for_each (mstack.begin(), mstack.end(), my_print);
	}
	return 0;	
}
