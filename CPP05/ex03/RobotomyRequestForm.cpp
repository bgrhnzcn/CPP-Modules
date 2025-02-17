#include "RobotomyRequestForm.hpp"

#include <cstdlib>
#include <iostream>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("Robotomy Request Form", 72, 45)
{
	this->setTarget("Default");
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other)
{
	this->setTarget(other.getTarget());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	this->setTarget(other.getTarget());
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("Robotomy Request Form", 72, 45)
{
	this->setTarget(target);
}

void RobotomyRequestForm::execute(const Bureaucrat& executer) const
{
	srand((unsigned int)time(NULL));
	if (this->getIsSigned() == false)
		throw AForm::UnsignedFormException();
	if (this->getExecuteGrade() < executer.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << "Some Drilling Noises!!!!" << std::endl;
	int value = rand();
	if (value % 2 == 0)
		std::cout << this->getTarget() << " robotomized successfully!" << std::endl;
	else
		std::cout << this->getTarget() << " can't robotomized!" << std::endl;
}


