#ifndef EX01_WRONGCAT_HPP_
#define EX01_WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
  WrongCat();
  WrongCat(const WrongCat& other);
  WrongCat& operator=(const WrongCat& other);
  ~WrongCat();

  void makeSound() const; // Cannot override!
};

#endif // !EX01_WRONGCAT_HPP_
