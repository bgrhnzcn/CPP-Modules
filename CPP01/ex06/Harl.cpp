#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "And the God said, 'Let there be Harl!'." << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl leaving the chat..." << std::endl;
}

void Harl::debug(void)
{
	std::cout << CYAN << "[ DEBUG ]\n" << DEFAULT
			  << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-special-ketchup "
			  << "burger. I really do!"
			  << std::endl;
}

void Harl::info(void)
{
	std::cout << GRAY << "[ INFO ]\n" << DEFAULT
			  <<"I cannot believe adding extra bacon costs more money."
			  <<" You didn’t put enough bacon in my burger! If you did,"
			  << " I wouldn’t be asking for more!"
			  << std::endl;
}

void Harl::warning(void)
{
	std::cout << YELLOW << "[ WARNING ]\n" << DEFAULT
			  << "I think I deserve to have some extra bacon for free."
			  << " I’ve been coming for years whereas you started working"
			  << " here since last month."
			  << std::endl;
}

void Harl::error(void)
{
	std::cout << RED << "[ ERROR ]\n" << DEFAULT
			  << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[4])(void) = {&Harl::debug, &Harl::info,
									&Harl::warning, &Harl::error};
	
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*funcs[i])();
			break;
		}
	}
}