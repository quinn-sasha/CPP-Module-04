#ifndef EX03_ICHARACTER_HPP_
#define EX03_ICHARACTER_HPP_

#include "AMateria.hpp"
#include <string>

class ICharacter {
public:
  virtual ~ICharacter() {}
  virtual const std::string& getName() const = 0;
  virtual void equip(AMateria* materia) = 0;
  virtual void unequip(int materia_i) = 0;
  virtual void use(int materia_i, ICharacter& target) = 0;
};

#endif // EX03_ICHARACTER_HPP_
