#include <iostream>

int	main(int argc, char** argv)
{
	std::string	str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		str = std::string(argv[i]);
		for (std::string::iterator begin = str.begin(); begin != str.end(); begin++)
			*begin = std::toupper(*begin);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
