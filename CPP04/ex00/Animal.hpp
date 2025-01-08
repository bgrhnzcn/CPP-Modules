#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
public:
	virtual void makeSound() const;
	std::string getType() const;
public:
	Animal();
	Animal(const Animal &other);
	~Animal();
	Animal &operator=(const Animal &other);
protected:
	std::string type;
};

#endif

