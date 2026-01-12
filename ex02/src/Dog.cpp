#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal() {
  std::cout << "Dog constructor called" << std::endl;

  type = "Dog";
  brain_ptr = new Brain;
}

Dog::Dog(const Dog& other) : Animal(other) {
  std::cout << "Dog copy-constructor called" << std::endl;

  brain_ptr = new Brain;
  *brain_ptr = *other.brain_ptr;
}

Dog& Dog::operator=(const Dog& other) {
  if (this == &other) {
    return *this;
  }
  type = other.type;
  *brain_ptr = *other.brain_ptr;
  return *this;
}

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
  delete brain_ptr;
}

void Dog::makeSound() const { std::cout << "wan-wan" << std::endl; }
