#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(void);
		AMateria(const AMateria& obj);
		AMateria(const std::string& type);
		virtual ~AMateria(void);

		AMateria&			operator=(const AMateria& obj);

		std::string			getType(void) const;

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string			_type;
};

std::ostream&	operator<<(std::ostream& o, const AMateria& i);

#endif
