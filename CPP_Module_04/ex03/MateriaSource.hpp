/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maltun <maltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 00:43:41 by maltun            #+#    #+#             */
/*   Updated: 2024/03/03 20:04:04 by maltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& obj);
		virtual ~MateriaSource(void);

		MateriaSource&	operator=(const MateriaSource& obj);

		void			 learnMateria(AMateria* m);
		AMateria*		createMateria(const std::string& type);

	private:
		AMateria*		_materia[4];
};

#endif
