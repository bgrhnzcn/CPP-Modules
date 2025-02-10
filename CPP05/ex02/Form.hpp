#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Form
{
public:
	Form();
	Form(const std::string& name, unsigned int signGrade, unsigned int executeGrade);
	Form(const Form& other);
	~Form();
	Form& operator=(const Form& other);
public:
	std::string getName() const;
	unsigned int getGrade() const;
	bool getIsSigned() const;
	void beSigned(const Bureaucrat& bureaucrat);
private:
	const std::string name;
	const unsigned int signGrade;
	const unsigned int executeGrade;
	bool isSigned;
private:
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
		virtual const char* what() const throw();
	private:
		const std::string text;
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
		virtual const char* what() const throw();
	private:
		const std::string text;
	};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
