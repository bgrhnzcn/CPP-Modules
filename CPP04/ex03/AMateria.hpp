#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

# include "ICharacter.hpp"

class AMateria
{
protected:
	const std::string type;
public:
	AMateria();
	AMateria(const AMateria& other);
	AMateria(const std::string& type);
	virtual ~AMateria();
	AMateria& operator=(const AMateria& other);
public:
	const std::string& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
