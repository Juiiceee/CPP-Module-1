# include <fstream>
#include "sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong arguments\n";
		return (1);
	}
	std::ifstream file(argv[1]);
	if (checker(file, argv[2]))
		return (1);
	if (replace(file, argv[1], argv[2], argv[3]))
		return (1);
	return (0);
}