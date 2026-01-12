#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
  const Animal* meta = new Animal();
  const Animal* dog = new Dog();
  const Animal* cat = new Cat();
  const WrongAnimal* wrong_cat = new WrongCat();

  std::cout << meta->getType() << " " << std::endl;
  std::cout << dog->getType() << " " << std::endl;
  std::cout << cat->getType() << " " << std::endl;
  std::cout << wrong_cat->getType() << " " << std::endl;
  cat->makeSound();  // will output the cat sound!
  dog->makeSound();
  meta->makeSound();
  wrong_cat->makeSound();

  delete cat;
  delete dog;
  delete meta;
  delete wrong_cat;

  return 0;
}
