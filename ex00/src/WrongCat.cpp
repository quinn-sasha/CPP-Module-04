#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
  std::cout << "WrongCat constructor called" << std::endl;
  type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
  std::cout << "WrongCat copy-constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  if (this == &other) {
    return *this;
  }
  WrongAnimal::operator=(other);
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
  std::cout << "nyan-nyan(wrong)" << std::endl;
}
