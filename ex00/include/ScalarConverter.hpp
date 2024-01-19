/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:48:32 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/19 10:32:47 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <limits.h>

class ScalarConverter
{
	public:
		ScalarConverter() {};
		ScalarConverter(const ScalarConverter& rhs) {};
		ScalarConverter&	operator=(const ScalarConverter& rhs) { return *this; };
		~ScalarConverter() {};

		void	convert(const std::string& format) const;
};

#endif