#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("Shrubbery Creation Form", 145, 137)
{
	this->setTarget("Default");
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other)
{
	this->setTarget(other.getTarget());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	this->setTarget(other.getTarget());
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("Shrubbery Creation Form", 145, 137)
{
	this->setTarget(target);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executer) const
{
	if (this->getIsSigned() == false)
		throw AForm::UnsignedFormException();
	if (this->getExecuteGrade() < executer.getGrade())
		throw AForm::GradeTooLowException();
	std::ofstream file;
	file.open((this->getTarget() + "_shrubbery").c_str());
	if (!file.is_open())
		throw std::runtime_error("Failed to open file");
	file << "       _-_" << std::endl
		 << "    /~~   ~~\\" << std::endl
		 << " /~~         ~~\\" << std::endl
		 << "{               }" << std::endl
		 << " \\  _-     -_  /" << std::endl
		 << "   ~  \\\\ //  ~" << std::endl
		 << "_- -   | | _- _" << std::endl
		 << "  _ -  | |   -_" << std::endl
		 << "      // \\\\" << std::endl;
}


