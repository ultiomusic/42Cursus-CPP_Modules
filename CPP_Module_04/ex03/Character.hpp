#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];
	public:
		Character(void);
		Character(const Character& obj);
		Character(std::string name);
		Character& operator=(const Character& obj);
		const std::string& getName(void) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		virtual ~Character(void);
};

std::ostream&	operator<<(std::ostream& o, const Character& i);

#endif
