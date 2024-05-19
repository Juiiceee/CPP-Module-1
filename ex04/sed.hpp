#ifndef SED_HPP
# define SED_HPP

# include <fstream>
# include <iostream>
# include <string>

int	replace(std::ifstream &ifile, std::string filename, const std::string &s1, const std::string &s2);
int	checker(std::ifstream &file, std::string s1);

#endif