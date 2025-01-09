#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &other);
	~Cure();
	Cure &operator=(const Cure &other);
public:
	void use(ICharacter &target);
	AMateria* clone() const;
};

#endif
