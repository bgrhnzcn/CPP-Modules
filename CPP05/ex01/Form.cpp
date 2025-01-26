#include <iostream>
#include "Form.hpp"

Form::Form()
	: name("Default"), signGrade(150), executeGrade(150), isSigned(false)
{}

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

std::string Form::getName() const;
unsigned int Form::getGrade() const;
bool Form::getIsSigned() const;
void Form::beSigned(const Bureaucrat& bureaucrat);


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
