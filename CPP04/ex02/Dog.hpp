#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
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

