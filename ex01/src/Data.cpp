/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:20:52 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/19 10:21:01 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
	:	_data("Hallo")
{
}

Data::Data(const std::string& inp)
	:	_data(inp)
{
}

Data::Data(const Data& rhs)
	:	_data(rhs._data)
{
}

Data&	Data::operator=(const Data& rhs)
{
	if (this != &rhs)
		_data = rhs._data;
	return *this;
}

void	Data::printStr( void ) const
{
	std::cout << _data << std::endl;
}
