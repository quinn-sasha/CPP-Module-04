#ifndef EX01_INCLUDE_CAT_HPP_
#define EX01_INCLUDE_CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
  Brain* brain_ptr;

public:
  Cat();
  Cat(const Cat& other);
  Cat& operator=(const Cat& other);
  ~Cat();

  void makeSound() const; // override
};

#endif // EX01_INCLUDE_CAT_HPP_
