#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& obj);
		virtual ~Ice(void);
		Ice& operator=(const Ice& obj);
		Ice* clone(void) const;
};

#endif
