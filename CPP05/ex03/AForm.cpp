#include <iostream>
#include "AForm.hpp"

AForm::AForm()
	: name("Default"), signGrade(150), executeGrade(150), isSigned(false)
{}

AForm::AForm(const std::string& name, unsigned int signGrade, unsigned int executeGrade)
	: name(name), signGrade(signGrade), executeGrade(executeGrade), isSigned(false)
{
	if (this->signGrade > 150 || this->executeGrade > 150)
		throw AForm::GradeTooLowException();
	if (this->signGrade < 1 || this->executeGrade < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm& other)
	: name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade), isSigned(other.isSigned)
{}

AForm::~AForm()
{}

AForm& AForm::operator=(const AForm& other)
{
	(void)other;
	return (*this);
}

std::string AForm::getName() const
{
	return (name);
}

std::string AForm::getTarget() const
{
	return (name);
}

void AForm::setTarget(const std::string& target)
{
	this->target = target;
}

unsigned int AForm::getSignGrade() const
{
	return (signGrade);
}

unsigned int AForm::getExecuteGrade() const
{
	return (executeGrade);
}

bool AForm::getIsSigned() const
{
	return (isSigned);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= signGrade)
	{
		isSigned = true;
		std::cout << bureaucrat.getName() << " signed " << name << std::endl;
	}
	else
	{
		AForm::GradeTooLowException exception;
		std::cout << bureaucrat.getName() << " couldn't sign " << name << " because " << "bureaucrat grade too low." << std::endl;
		throw exception;
	}
}

AForm::GradeTooHighException::GradeTooHighException()
	: text("Form Grade Too High")
{}

AForm::GradeTooHighException::~GradeTooHighException() throw()
{}

const char* AForm::GradeTooHighException::what() const throw()
{
	return (text.c_str());
}

AForm::GradeTooLowException::GradeTooLowException()
	: text("Form Grade Too Low")
{}

AForm::GradeTooLowException::~GradeTooLowException() throw()
{}

const char* AForm::GradeTooLowException::what() const throw()
{
	return (text.c_str());
}

AForm::UnsignedFormException::UnsignedFormException()
	: text("Form Is Unsigned")
{}

AForm::UnsignedFormException::~UnsignedFormException() throw()
{}

const char* AForm::UnsignedFormException::what() const throw()
{
	return (text.c_str());
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
	os << form.getName();
	return (os);
}
