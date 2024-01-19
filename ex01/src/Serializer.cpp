/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:09:10 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/19 10:42:45 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t	sptr = reinterpret_cast<uintptr_t>(ptr);
	return sptr;
}

Data*	Serializer::deserialize(uintptr_t ptr)
{
	Data*	dptr = reinterpret_cast<Data *>(ptr);
	return (dptr);
}
