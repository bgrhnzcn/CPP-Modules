#include <iostream>
#include "Form.hpp"

Form::Form()
	: name("Default"), signGrade(150), executeGrade(150), isSigned(false)
{}

Form::Form(const std::string& name, unsigned int signGrade, unsigned int executeGrade)
	: name(name), signGrade(signGrade), executeGrade(executeGrade)
{
	if (this->signGrade > 150 || this->executeGrade > 150)
		throw Form::GradeTooHighException();
	if (this->signGrade < 1 || this->executeGrade < 1)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other)
	: name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade), isSigned(other.isSigned)
{}

Form::~Form()
{}

Form& Form::operator=(const Form& other)
{
	(void)other;
	return (*this);
}

std::string Form::getName() const
{
	return (name);
}

unsigned int Form::getGrade() const
{
	return (signGrade);
}

bool Form::getIsSigned() const
{
	return (isSigned);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= signGrade)
	{
		isSigned = true;
		std::cout << bureaucrat.getName() << " signed " << name << std::endl;
	}
	else
	{
		Form::GradeTooLowException exception;
		std::cout << bureaucrat.getName() << " couldn't sign " << name << " because " << "bureaucrat grade too low." << std::endl;
		throw exception;
	}
}

Form::GradeTooHighException::GradeTooHighException()
	: text("Form::GradeTooHighException Throwed.")
{}

Form::GradeTooLowException::GradeTooLowException()
	: text("Form::GradeTooLowException Throwed.")
{}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

const char* Form::GradeTooHighException::what() const throw()
{
	return (text.c_str());
}

const char* Form::GradeTooLowException::what() const throw()
{
	return (text.c_str());
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << form.getName() << std::endl;
	return (os);
}
