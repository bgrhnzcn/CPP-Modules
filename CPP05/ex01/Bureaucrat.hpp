#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const std::string& name, unsigned int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();
public:
	std::string getName() const;
	unsigned int getGrade() const;
	void incrementGrade(unsigned int increment);
	void decrementGrade(unsigned int decrement);
	void signForm(Form& form);
private:
	const std::string name;
	unsigned int grade;
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

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
