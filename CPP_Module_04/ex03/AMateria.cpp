#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called" << std::endl;
	this->_type = "default";
}

AMateria::AMateria(const AMateria& obj)
{
	std::cout << "AMateria copy constructor called: " << obj.getType() << std::endl;
	*this = obj;
}

AMateria::AMateria(const std::string& type)
{
	std::cout << "AMateria string constructor called: " << type << std::endl;
	this->_type = type;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called: " << getType() << std::endl;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	(void)obj;
	return (*this);
}

void AMateria::use(ICharacter& target)
{
	if (getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

std::string	AMateria::getType(void) const
{
	return (this->_type);
}

std::ostream&	operator<<(std::ostream& o, const AMateria& i)
{
	o << "AMateria type is: " << i.getType();
	return o;
}
