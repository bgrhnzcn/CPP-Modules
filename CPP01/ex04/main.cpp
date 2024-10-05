#include <string>
#include <iostream>
#include <fstream>

int replace(char **argv, std::string str)
{
	std::ofstream	stream;
	int				a;

	stream.open((std::string(argv[1]) + ".replace").c_str());
	if (!stream.is_open())
		return (1);
	for (size_t i = 0; i < str.size(); i++)
	{
		a = str.find(argv[2], i);
		if (a != -1 && a == (int)i)
		{
			stream << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			stream << str[i];
	}
	stream.close();
	return (0);
}

int main(int argc, char** argv)
{
	char			c;
	std::string		str;
	std::ifstream	stream;

	if (argc != 4)
		return (std::cout << "Invalid number of arguments. Use 'file <file-name> <string-1> <string-2>'."
						  << std::endl, 1);
	stream.open(argv[1]);
	if (!stream.is_open())
		return (std::cout << "Can't find or open file." << std::endl, 1);
	while (!stream.eof() && stream >> std::noskipws >> c)
		str += c;
	return (replace(argv, str));
}
