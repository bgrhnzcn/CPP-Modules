#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
public:
	void makeSound() const;
	void printIdeas() const;
public:
	Cat();
	Cat(const Cat& other);
	Cat(const std::string& idea);
	~Cat();
	Cat &operator=(const Cat &other);
private:
	Brain* brain;
};

#endif

