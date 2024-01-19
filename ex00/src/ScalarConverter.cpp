/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:51:06 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/19 00:03:44 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// #############################################################################
//			UTILS
// #############################################################################

static void	printStr(const std::string& str)
{
	std::cout << str << std::flush;
}

static std::string	strMinF(const std::string& format)
{
	std::string	str;
	if (format.back() == 'f')
		str = format.substr(0, format.size() - 1);
	else
		str = format;
	return str;
}


// #############################################################################
//			CHARS
// #############################################################################

static void	convertChar(const std::string& format)
{
	printStr("char:\t");
	char	*pend;
	std::string	str = strMinF(format);
	float	num = static_cast<float>(std::strtof(str.c_str(), &pend));
	if ((pend && pend[0]) || num > 127 || num < 0 || str.size() == 0)
		std::cout << "impossible" << std::endl;
	else if (num < ' ' || num > '~')
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << (char)num << "'" << std::endl;
}


// #############################################################################
//			INTS
// #############################################################################

static void	convertInt(const std::string& format)
{
	printStr("Int:\t");
	char	*pend;
	std::string	str = strMinF(format);
	float	num = static_cast<float>(std::strtof(str.c_str(), &pend));
	if ((pend && pend[0]) || num > INT32_MAX || num < INT32_MIN || str.size() == 0)
		std::cout << "impossible" << std::endl;
	else
		std::cout << (int)num << std::endl;
}


// #############################################################################
//			FLOATS
// #############################################################################

static bool	isPseudoLitf(const std::string& format)
{
	if (format == "nan" || format == "nanf") { printStr("nanf\n"); return true; };
	if (format == "-inf" || format == "-inff") { printStr("-inff\n"); return true; };
	if (format == "+inf" || format == "+inff") { printStr("inff\n"); return true; };
	if (format == "inf" || format == "inff") { printStr("inff\n"); return true; };
	return false;
}

static void	printFloat(float num)
{
	std::cout << num;
	float	roundFloat = floor(num);
	if (num == roundFloat)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

static void	convertFloat(const std::string& format)
{
	printStr("Float:\t");
	if (isPseudoLitf(format) == true)
		return ;
	char	*pend = NULL;
	std::string	str = strMinF(format);
	float	fl = static_cast<float>(std::strtof(str.c_str(), &pend));
	if ((pend && pend[0]) || str.size() == 0)
		std::cout << "impossible" << std::endl;
	else
		printFloat(fl);
}


// #############################################################################
//			DOUBLES
// #############################################################################

static bool	isPseudoLitd(const std::string& format)
{
	if (format == "nan" || format == "nanf") { printStr("nan\n"); return true; };
	if (format == "-inf" || format == "-inff") { printStr("-inf\n"); return true; };
	if (format == "+inf" || format == "+inff") { printStr("inf\n"); return true; };
	if (format == "inf" || format == "inff") { printStr("inf\n"); return true; };
	return false;
}

static void	printDouble(double num)
{
	std::cout << num;
	double	roundDouble = floor(num);
	if (num == roundDouble)
		std::cout << ".0";
	std::cout << std::endl;
}

static void	convertDouble(const std::string& format)
{
	printStr("Double:\t");
	if (isPseudoLitd(format) == true)
		return ;
	char	*pend = NULL;
	std::string	str = strMinF(format);
	double	dbl = static_cast<double>(std::strtod(str.c_str(), &pend));
	if ((pend && pend[0]) || str.size() == 0)
		std::cout << "impossible" << std::endl;
	else
		printDouble(dbl);
}


// #############################################################################
//			CONVERT
// #############################################################################

void	ScalarConverter::convert(const std::string& format) const
{
	convertChar(format);
	convertInt(format);
	convertFloat(format);
	convertDouble(format);
}
