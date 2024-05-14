#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

int	Harl::strtonb(std::string str)
{
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (tab[i] == str)
			return (i);
	return (-1);
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !\n";
}

void Harl::info(void)
{
	std::cout << "[INFO]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
}

void Harl::warning(void)
{
	std::cout << "[WARNING]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "[ERROR]\n";
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	void	(Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	if (this->strtonb(level) == -1)
		return ;
	(this->*functions[this->strtonb(level)])();
}