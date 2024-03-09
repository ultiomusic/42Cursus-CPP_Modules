#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_name = "dafault";
}

Character::Character(const Character& obj)
{
	std::cout << "Character copy constructor called: " << obj.getName() << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = obj;
}

Character::Character(std::string name)
{
	std::cout << "Character string constructor called: " << name << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_name = name;
}

Character::~Character(void)
{
	std::cout << "Character destructor called: " << getName() << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

const std::string&	Character::getName(void) const
{
	return (this->_name);
}

Character& Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		this->_name = obj.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (obj._inventory[i])
				this->_inventory[i] = obj._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Character& i)
{
	o << "Character name is: " << i.getName();
	return o;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}
