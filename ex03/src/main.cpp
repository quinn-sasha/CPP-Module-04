#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <cassert>
#include <iostream>

void test_42_requirements() {
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter* me = new Character("me");
  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);

  delete bob;
  delete me;
  delete src;
}

void test_character() {
  Character player1("sasha");
  Character player2("kate");
  player1.equip(new Ice);
  player2.equip(new Cure);
  player2 = player1;
  player2.use(0, player1);

  player1.unequip(-100);   // Invalid index
  player1.unequip(100);    // Invalid index
  player1.unequip(0);      // Valid
  player1.unequip(0);      // No materia
  player1.use(0, player2); // No materia
  player2.use(0, player1);

  for (int i = 0; i < 3; i++) {
    player2.equip(new Cure);
  }
  AMateria* tmp = new Cure;
  player2.equip(tmp); // Cannot hold more materias
  delete tmp;
}

void test_materia_source() {
  IMateriaSource* source = new MateriaSource();
  source->learnMateria(new Ice);
  assert(source->createMateria("cure") == 0);

  for (int i = 0; i < 3; i++) {
    source->learnMateria(new Cure);
  }
  AMateria* tmp = new Cure;
  source->learnMateria(tmp); // Cannot learn more materias
  delete tmp;

  delete source;
}

// --- 実行用 main ---

int main() {
  std::cout << "========================================" << std::endl;
  std::cout << "       RUNNING: 42 Requirements         " << std::endl;
  std::cout << "========================================" << std::endl;
  test_42_requirements();
  std::cout << std::endl;

  std::cout << "========================================" << std::endl;
  std::cout << "       RUNNING: Character Tests         " << std::endl;
  std::cout << "========================================" << std::endl;
  test_character();
  std::cout << std::endl;

  std::cout << "========================================" << std::endl;
  std::cout << "      RUNNING: MateriaSource Tests      " << std::endl;
  std::cout << "========================================" << std::endl;
  test_materia_source();
  std::cout << std::endl;
}
