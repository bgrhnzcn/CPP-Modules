#include "Bureaucrat.hpp"

#include "ShrubberyCreationForm.hpp"

int main(void)
{
	ShrubberyCreationForm form("TEST_TARGET");
	Bureaucrat bur("TEST_B", 1);
	bur.signForm(form);
	bur.executeForm(form);

	return (0);
}
