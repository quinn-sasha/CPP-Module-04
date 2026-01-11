#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog() : Animal() {
  std::cout << "Dog constructor called" << std::endl;

  type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other) {
  std::cout << "Dog copy-constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
  if (this == &other) {
    return *this;
  }
  type = other.type;
  return *this;
}

Dog::~Dog() { std::cout << "Dog destructor called" << std::endl; }

void Dog::makeSound() const { std::cout << "wan-wan" << std::endl; }
