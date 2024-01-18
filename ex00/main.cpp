/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 22:13:51 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/17 22:15:04 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, const char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Must give 2 arguments" << std::endl;
		return 1;
	}
	ScalarConverter	converter;
	converter.convert(argv[1]);
	return 0;
}
