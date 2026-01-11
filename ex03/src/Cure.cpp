#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {
  std::cout << "Cure constructor called" << std::endl;
}

// AMateria copy constructor does nothing, so use the constructor
Cure::Cure(const Cure& /* other */) : AMateria("cure") {
  std::cout << "Cure copy-constructor called" << std::endl;
}

// No need to implement this
Cure& Cure::operator=(const Cure& /* other */) { return *this; }

Cure::~Cure() { std::cout << "Cure destructor called" << std::endl; }

AMateria* Cure::clone() const { return new Cure; }

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
