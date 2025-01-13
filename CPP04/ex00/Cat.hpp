#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
	void makeSound() const;
public:
	Cat();
	Cat(const Cat &other);
	~Cat();
	Cat &operator=(const Cat &other);
};

#endif

