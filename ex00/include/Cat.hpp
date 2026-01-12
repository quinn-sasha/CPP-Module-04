#ifndef EX00_INCLUDE_CAT_HPP_
#define EX00_INCLUDE_CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat();
  Cat(const Cat& other);
  Cat& operator=(const Cat& other);
  ~Cat();

  void makeSound() const;  // override
};

#endif  // EX00_INCLUDE_CAT_HPP_
