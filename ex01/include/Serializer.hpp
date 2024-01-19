/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:06:28 by bootjan           #+#    #+#             */
/*   Updated: 2024/01/19 10:42:41 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"

class Serializer
{
	public:
		Serializer() {};
		~Serializer() {};

		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t ptr);
};

#endif