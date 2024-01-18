/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:51:06 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/17 22:25:16 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	printStr(const std::string& str)
{
	std::cout << str << std::flush;
}

void	convertChar(const std::string& format)
{
	std::cout << format << std::flush;
}

void	convertInt(const std::string& format)
{
	std::cout << format << std::flush;
}

void	isPseudoLitf(const std::string& format)
{
	if (format == "nan") { printStr("nanf"); };
	if (format == "-inf" || format == "-inff") { printStr("-inff"); };
	if (format == "+inf" || format == "+inff") { printStr("+inff"); };
}

void	isPseudoLitd(const std::string& format)
{
	if (format == "nan") { printStr("nan"); };
	if (format == "-inf" || format == "-inff") { printStr("-inf"); };
	if (format == "+inf" || format == "+inff") { printStr("+inf"); };
}

void	convertFloat(const std::string& format)
{
	isPseudoLitf(format);
}

void	convertDouble(const std::string& format)
{
	isPseudoLitd(format);
	incorrectFormat(format)
		return ;
}

void	ScalarConverter::convert(const std::string& format) const
{
	printStr("char: ");
	convertChar(format);
	printStr("\nInt: ");
	convertInt(format);
	printStr("\nFloat: ");
	convertFloat(format);
	printStr("\nDouble: ");
	convertDouble(format);
	std::cout << std::endl;
}
