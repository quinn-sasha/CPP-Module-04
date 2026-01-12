#ifndef EX02_INCLUDE_CAT_HPP_
#define EX02_INCLUDE_CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
  Brain* brain_ptr;

 public:
  Cat();
  Cat(const Cat& other);
  Cat& operator=(const Cat& other);
  ~Cat();

  void makeSound() const;  // override
};

#endif  // EX02_INCLUDE_CAT_HPP_
