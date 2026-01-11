#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {
  std::cout << "Ice constructor called" << std::endl;
}

// AMateria copy constructor does nothing, so use the constructor
Ice::Ice(const Ice& /* other */) : AMateria("ice") {
  std::cout << "Ice copy-constructor called" << std::endl;
}

// No need to implement this
Ice& Ice::operator=(const Ice& /* other */) { return *this; }

Ice::~Ice() { std::cout << "Ice destructor called" << std::endl; }

AMateria* Ice::clone() const { return new Ice; }

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *"
            << std::endl;
}
