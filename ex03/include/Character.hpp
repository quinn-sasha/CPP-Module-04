#ifndef EX03_CHARACTER_HPP_
#define EX03_CHARACTER_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter {
  std::string name_;
  int num_materias_;
  static const int kMaxMaterias = 4;
  AMateria* materia_inventory_[kMaxMaterias];

  int num_disposed_materias_;
  // This is a temporal way to save dropped items
  // Better ways are using linked list, or vector
  static const int kMaxDisposedMaterias = 1000;
  AMateria* materias_to_delete_[kMaxDisposedMaterias];

public:
  Character();
  Character(const std::string& name);
  Character(const Character& other);
  Character& operator=(const Character& other);
  ~Character();

  const std::string& getName() const;          // override
  void equip(AMateria* materia);               // override
  void unequip(int materia_i);                 // override
  void use(int materia_i, ICharacter& target); // override
};

#endif // EX03_CHARACTER_HPP_
