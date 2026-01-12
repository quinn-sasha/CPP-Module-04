#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal() {
  std::cout << "Cat constructor called" << std::endl;

  type = "Cat";
  brain_ptr = new Brain;
}

Cat::Cat(const Cat& other) : Animal(other) {
  std::cout << "Cat copy-constructor called" << std::endl;

  brain_ptr = new Brain;
  *brain_ptr = *other.brain_ptr;
}

Cat& Cat::operator=(const Cat& other) {
  if (this == &other) {
    return *this;
  }
  type = other.type;
  *brain_ptr = *other.brain_ptr;
  return *this;
}

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
  delete brain_ptr;
}

void Cat::makeSound() const { std::cout << "nyan-nyan" << std::endl; }
