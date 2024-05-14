#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	if (!this->_weapon || this->_weapon->getType().empty())
		std::cout << this->_name << " attacks with their AIR" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
