#ifndef EX00_WRONGANIMAL_HPP_
#define EX00_WRONGANIMAL_HPP_

#include <string>

class WrongAnimal {
protected:
  std::string type;

public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& other);
  WrongAnimal& operator=(const WrongAnimal& other);
  virtual ~WrongAnimal();

  void makeSound() const; // This should be virtual!
  std::string getType() const;
};

#endif // EX00_WRONGANIMAL_HPP_
