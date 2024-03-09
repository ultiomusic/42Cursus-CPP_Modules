#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(void);
		AMateria(const AMateria& obj);
		AMateria(const std::string& type);
		AMateria& operator=(const AMateria& obj);
		std::string getType(void) const;
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
		virtual ~AMateria(void);
};

std::ostream&	operator<<(std::ostream& o, const AMateria& i);

#endif
