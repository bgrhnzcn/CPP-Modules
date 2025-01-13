#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
public:
	Brain();
	Brain(const Brain &other);
	~Brain();
	Brain &operator=(const Brain &other);
public:
	void printIdeas() const;
public:
	std::string ideas[100];
};

#endif
