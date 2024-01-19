/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:36:19 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/19 10:41:39 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int		main(void)
{
	Serializer	x;
	Data*	first = new Data("Serializer");
	Data*	second = new Data("Codam");
	Data*	n_ptr = NULL;

	uintptr_t	sfirst = x.serialize(first);
	uintptr_t	ssecond = x.serialize(second);
	uintptr_t	sn_ptr = x.serialize(n_ptr);

	std::cout << "value of sfirst: " << sfirst << std::endl;
	std::cout << "value of ssecond: " << ssecond << std::endl;
	std::cout << "value of sn_ptr: " << sn_ptr << std::endl;

	Data*	dfirst = x.deserialize(sfirst);
	Data*	dsecond = x.deserialize(ssecond);
	Data*	dn_ptr = x.deserialize(sn_ptr);

	dfirst->printStr();
	dsecond->printStr();
	std::cout << "Value of n_ptr is still: " << dn_ptr << std::endl;

	delete first;
	delete second;
}
