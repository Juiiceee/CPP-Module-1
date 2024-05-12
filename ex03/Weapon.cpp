#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{

}

std::string	Weapon::getType()
{
	return (this->_type);
}

void		Weapon::setType(std::string type)
{
	this->_type = type;
}
