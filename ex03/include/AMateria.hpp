#ifndef EX03_AMATERIA_HPP_
#define EX03_AMATERIA_HPP_

#include <string>

class ICharacter; // To prevent recursive iclude between ICharacter.hpp

class AMateria {
protected:
  std::string type_;

public:
  AMateria();
  AMateria(const std::string& type);
  AMateria(const AMateria& other);
  AMateria& operator=(const AMateria& other);
  virtual ~AMateria();

  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);

  const std::string& getType() const;
};

#endif // EX03_AMATERIA_HPP_
