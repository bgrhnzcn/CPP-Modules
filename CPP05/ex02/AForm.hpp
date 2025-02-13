#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class AForm
{
public:
	AForm();
	AForm(const std::string& name, unsigned int signGrade, unsigned int executeGrade);
	AForm(const AForm& other);
	virtual ~AForm();
	AForm& operator=(const AForm& other);
public:
	std::string getName() const;
	std::string getTarget() const;
	unsigned int getSignGrade() const;
	unsigned int getExecuteGrade() const;
	void setTarget(const std::string& target);
	bool getIsSigned() const;
	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(const Bureaucrat& executer) const = 0;
private:
	const std::string name;
	std::string target;
	const unsigned int signGrade;
	const unsigned int executeGrade;
	bool isSigned;
protected:
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
	class UnsignedFormException : public std::exception
	{
	public:
		UnsignedFormException();
		virtual ~UnsignedFormException() throw();
		virtual const char* what() const throw();
	private:
		const std::string text;
	};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
