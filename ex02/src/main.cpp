#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  // Test to show abstract class cannot be instantiated
  /*
  std::cout << "--- Attempting to instantiate Abstract Class ---" << std::endl;
  const Animal* meta = new Animal;
  meta->makeSound();
  delete meta;
  */

  std::cout << "\n--- Testing Array of Animals ---" << std::endl;
  Animal* animals[4];
  animals[0] = new Dog;
  animals[1] = new Dog;
  animals[2] = new Cat;
  animals[3] = new Cat;

  for (int k = 0; k < 4; k++) {
    animals[k]->makeSound();
  }
  for (int k = 0; k < 4; k++) {
    delete animals[k];
  }
}
