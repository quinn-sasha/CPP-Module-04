#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

AMateria::AMateria() : type_("unknown") {
  std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type) : type_(type) {
  std::cout << "AMateria constructor called" << std::endl;
}

// WARNING: copy constructor does nothing for now
AMateria::AMateria(const AMateria& /* other */) {
  std::cout << "AMateria copy-constructor called" << std::endl;
}

// WARNING: assignment operator does nothing for now
AMateria& AMateria::operator=(const AMateria& /* other */) { return *this; }

AMateria::~AMateria() {
  std::cout << "AMateria destructor called" << std::endl;
}

void AMateria::use(ICharacter& /* target */) {
  std::cout << "Cannot use materia now. "
            << "Need to create a concrete materia like Ice" << std::endl;
}

const std::string& AMateria::getType() const { return type_; }
