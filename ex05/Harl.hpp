#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	int		strtonb(std::string str);
public:
	Harl();
	~Harl();
	void complain(std::string level);
};


#endif