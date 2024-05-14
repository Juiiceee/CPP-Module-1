#ifndef SED_HPP
# define SED_HPP

# include <fstream>
# include <iostream>
# include <string>

int	replace(std::ifstream &ifile, std::string filename, std::string s1, std::string s2);
int	checker(std::ifstream &file, std::string s1);

#endif