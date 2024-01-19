/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:47:43 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/19 11:06:04 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base*	generate( void )
{
	Base*	ret = NULL;
	srand((unsigned)time(NULL));
	int	prob = rand() % 3;
	switch (prob)
	{
		case 0: ret = new A; break;
		case 1: ret = new B; break;
		case 2: ret = new C; break;
	}
	return ret;
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A &>(p);
		std::cout << "Type A" << std::endl;
		(void)a;
	} catch ( const std::exception&	e ) {}
	try
	{
		B& b = dynamic_cast<B &>(p);
		std::cout << "Type B" << std::endl;
		(void)b;
	} catch ( const std::exception&	e ) {}
	try
	{
		C& c = dynamic_cast<C &>(p);
		std::cout << "Type C" << std::endl;
		(void)c;
	} catch ( const std::exception&	e ) {}
}

int		main(void)
{
	Base	*ptr = generate();
	identify(NULL);
	identify(ptr);
	identify(*ptr);
	delete(ptr);
	return (0);
}