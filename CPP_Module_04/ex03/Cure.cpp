/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltun <maltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 00:42:51 by maltun            #+#    #+#             */
/*   Updated: 2024/03/02 00:58:27 by maltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& obj) : AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = obj;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& obj)
{
	(void)obj;
	return (*this);
}

Cure*	Cure::clone(void) const
{
	return (new Cure(*this));
}
