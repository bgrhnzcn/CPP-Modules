#include "PresidentialPardonForm.hpp"

#include <iostream>

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("Presidential Pardon Form", 25, 5)
{
	this->setTarget("Default");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: AForm(other)
{
	this->setTarget(other.getTarget());
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	this->setTarget(other.getTarget());
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("Presidential Pardon Form", 25, 5)
{
	this->setTarget(target);
}

void PresidentialPardonForm::execute(const Bureaucrat& executer) const
{
	if (this->getIsSigned() == false)
		throw AForm::UnsignedFormException();
	if (this->getExecuteGrade() < executer.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}


