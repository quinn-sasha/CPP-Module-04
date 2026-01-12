#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
  std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
  std::cout << "Animal copy-constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
  if (this == &other) {
    return *this;
  }
  type = other.type;
  return *this;
}

Animal::~Animal() { std::cout << "Animal destructor called" << std::endl; }

void Animal::makeSound() const {
  std::cout << "Need to specify animal to make sound" << std::endl;
}

std::string Animal::getType() const { return type; }
