/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltun <maltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 00:43:02 by maltun            #+#    #+#             */
/*   Updated: 2024/03/02 00:58:48 by maltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& obj) : AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = obj;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& obj)
{
	(void)obj;
	return (*this);
}

Ice*	Ice::clone(void) const
{
	return (new Ice(*this));
}
