/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: bootjan <bootjan@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 21:51:06 by bootjan       #+#    #+#                 */
/*   Updated: 2024/01/18 18:45:42 by bschaafs      ########   odam.nl         */
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

bool	isPseudoLitf(const std::string& format)
{
	if (format == "nan") { printStr("nanf"); return true; };
	if (format == "-inf" || format == "-inff") { printStr("-inff"); return true; };
	if (format == "+inf" || format == "+inff") { printStr("+inff"); return true; };
	return false;
}

bool	isPseudoLitd(const std::string& format)
{
	if (format == "nan") { printStr("nan"); return true; };
	if (format == "-inf" || format == "-inff") { printStr("-inf"); return true; };
	if (format == "+inf" || format == "+inff") { printStr("+inf"); return true; };
	return false;
}

void	convertFloat(const std::string& format)
{
	char *pend;
	if (isPseudoLitf(format))
		return ;
	const char *str = format.c_str();
	float	fl = static_cast<float>(std::strtof(str, &pend));
	if (pend && pend[0])
		std::cout << "impossible" << std::endl;
	else
		std::cout << fl << "f" << std::endl;
}

void	convertDouble(const std::string& format)
{
	if (isPseudoLitd(format))
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
