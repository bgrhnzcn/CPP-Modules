#include "Bureaucrat.hpp"

#include <iostream>

Bureaucrat::Bureaucrat()
	: name("Bureaucrat"), grade(150)
{}

Bureaucrat::Bureaucrat(const std::string& name, unsigned int grade)
	: name(name), grade(grade)
{
	if (this->grade > 150)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
	: name(other.name), grade(other.grade)
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	(void)other;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::incrementGrade(unsigned int increment)
{
	grade += increment;
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(unsigned int decrement)
{
	grade += decrement;
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
	: text("GradeTooHighException Throwed.")
{}

Bureaucrat::GradeTooLowException::GradeTooLowException()
	: text("GradeTooLowException Throwed.")
{}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return (text.c_str());
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return (text.c_str());
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return (os);
}

