#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("Unknown") {
  std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
  std::cout << "WrongAnimal copy-constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  if (this == &other) {
    return *this;
  }
  type = other.type;
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
  std::cout << "Need to specify animal to make sound" << std::endl;
}

std::string WrongAnimal::getType() const { return type; }
