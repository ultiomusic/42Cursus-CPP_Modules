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
