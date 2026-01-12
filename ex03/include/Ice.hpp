#ifndef EX03_INCLUDE_ICE_HPP_
#define EX03_INCLUDE_ICE_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
 public:
  Ice();
  Ice(const Ice& ohter);
  Ice& operator=(const Ice& other);
  ~Ice();

  AMateria* clone() const;       // override
  void use(ICharacter& target);  // override
};

#endif  // EX03_INCLUDE_ICE_HPP_
