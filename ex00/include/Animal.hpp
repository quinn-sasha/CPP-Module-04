#ifndef EX00_INCLUDE_ANIMAL_HPP_
#define EX00_INCLUDE_ANIMAL_HPP_

#include <string>

class Animal {
 protected:
  std::string type;

 public:
  Animal();
  Animal(const Animal& other);
  Animal& operator=(const Animal& other);
  virtual ~Animal();

  virtual void makeSound() const;
  std::string getType() const;
};

#endif  // EX00_INCLUDE_ANIMAL_HPP_
