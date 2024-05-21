#include "sed.hpp"

int	replace(std::ifstream &ifile, std::string filename, const std::string &s1, const std::string &s2)
{
	std::string line;
	int pos;
	int	nb = 0;

	filename = filename.substr(0,filename.find('.')) + ".replace";
	std::ofstream ofile(filename.c_str());
	if (!ofile)
	{
		std::cerr << "Unable to create file\n";
		return (1);
	}
	while (getline(ifile, line))
		nb++;
	ifile.clear();
	ifile.seekg(0,std::ios::beg);
	while (std::getline(ifile, line))
	{
		pos = line.find(s1);
		while (1)
		{
			pos = line.find(s1);
			if (pos > 0)
				line.erase(pos, s1.length()).insert(pos, s2);
			if (pos < 1)
				break;
		}
		ofile << line;
		if (--nb > 0)
			ofile << std::endl;
	}
	return (0);
}

int checker(std::ifstream &file, std::string s1)
{
	if (!file)
	{
		std::cerr << "Unable to open file\n";
		return (1);
	}
	else if (s1.empty())
	{
		std::cerr << "Wrong arguments\n";
		return (1);
	}
	return (0);
}
