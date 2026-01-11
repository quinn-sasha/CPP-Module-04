#ifndef EX03_CURE_HPP_
#define EX03_CURE_HPP_

#include "AMateria.hpp"

class Cure : public AMateria {
public:
  Cure();
  Cure(const Cure& ohter);
  Cure& operator=(const Cure& other);
  ~Cure();

  AMateria* clone() const;      // override
  void use(ICharacter& target); // override
};

#endif // !EX03_CURE_HPP_
