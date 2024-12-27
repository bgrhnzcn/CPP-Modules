#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2 ||	
				   ((std::string (argv[1])) != "DEBUG" 
				 	&& (std::string (argv[1])) != "INFO" 
				  	 && (std::string (argv[1])) != "WARNING" 
				   	  && (std::string (argv[1])) != "ERROR" ))
	{
		std::cerr 
			<< RED << "USAGE: " 
			<< DEFAULT << "./harlFilter [" 
			<< CYAN << "'DEBUG'" 
			<< DEFAULT << " | " 
			<< GRAY << "'INFO'" 
			<< DEFAULT << " | " 
			<< YELLOW << "'WARNING'" 
			<< DEFAULT << " | " 
			<< RED << "'ERROR'" 
			<< DEFAULT << "]" 
			<< std::endl;
		return (1);
	}
	Harl harl;
	harl.complain(argv[1]);
}

