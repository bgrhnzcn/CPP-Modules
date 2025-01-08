#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal
{
public:
	virtual void makeSound() const = 0;
	std::string getType() const;
public:
	AAnimal();
	AAnimal(const AAnimal &other);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal &other);
protected:
	std::string type;
};

#endif

