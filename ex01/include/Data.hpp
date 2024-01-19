/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:16:12 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/19 10:20:47 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
		std::string	_data;
	public:
		Data();
		Data(const std::string& inp);
		Data(const Data& rhs);
		Data&	operator=(const Data& rhs);
		~Data() {};

		void	printStr(void) const;
};

#endif