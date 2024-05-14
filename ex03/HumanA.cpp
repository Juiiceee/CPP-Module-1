#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
	
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

void	HumanA::attack()
{
	if (this->_weapon.getType().empty())
		std::cout << this->_name << " attacks with their AIR" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
