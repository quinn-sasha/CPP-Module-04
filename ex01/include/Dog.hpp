#ifndef EX01_INCLUDE_DOG_HPP_
#define EX01_INCLUDE_DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  Brain* brain_ptr;

 public:
  Dog();
  Dog(const Dog& other);
  Dog& operator=(const Dog& other);
  ~Dog();

  void makeSound() const;  // override
};

#endif  // EX01_INCLUDE_DOG_HPP_
