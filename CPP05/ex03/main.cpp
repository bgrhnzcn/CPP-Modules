#include "Bureaucrat.hpp"

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	ShrubberyCreationForm shruForm("TEST_TARGET");
	PresidentialPardonForm presForm("TEST_TARGET2");
	RobotomyRequestForm roboForm("TEST_TARGET3");
	Bureaucrat bur("TEST_B", 1);
	bur.signForm(shruForm);
	bur.executeForm(shruForm);
	bur.signForm(presForm);
	bur.executeForm(presForm);
	bur.signForm(roboForm);
	bur.executeForm(roboForm);
	return (0);
}
