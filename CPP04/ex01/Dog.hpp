#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	void makeSound() const;
	void printIdeas() const;
public:
	Dog();
	Dog(const Dog& other);
	Dog(const std::string& idea);
	~Dog();
	Dog& operator=(const Dog& other);
private:
	Brain* brain;
};

#endif

