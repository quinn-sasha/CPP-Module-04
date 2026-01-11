#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

Character::Character()
    : name_("unknown"), num_materias_(0), num_disposed_materias_(0) {

  for (int i = 0; i < kMaxMaterias; i++) {
    materia_inventory_[i] = nullptr;
  }
  std::cout << "Character constructor called" << std::endl;
}

Character::Character(const std::string& name)
    : name_(name), num_materias_(0), num_disposed_materias_(0) {

  for (int i = 0; i < kMaxMaterias; i++) {
    materia_inventory_[i] = nullptr;
  }
  std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& other)
    : name_(other.name_), num_materias_(other.num_materias_),
      num_disposed_materias_(0) {

  for (int i = 0; i < num_materias_; i++) {
    materia_inventory_[i] = other.materia_inventory_[i]->clone();
  }
  std::cout << "Character copy-constructor called" << std::endl;
}

Character& Character::operator=(const Character& other) {
  if (this == &other) {
    return *this;
  }
  for (int i = 0; i < num_materias_; i++) {
    delete materia_inventory_[i];
  }
  for (int i = 0; i < other.num_materias_; i++) {
    materia_inventory_[i] = other.materia_inventory_[i]->clone();
  }
  name_ = other.name_;
  num_materias_ = other.num_materias_;
  return *this;
}

Character::~Character() {
  std::cout << "Character destructor called" << std::endl;

  for (int i = 0; i < num_materias_; i++) {
    delete materia_inventory_[i];
  }
  for (int i = 0; i < num_disposed_materias_; i++) {
    delete materias_to_delete_[i];
  }
}

const std::string& Character::getName() const { return name_; }

void Character::equip(AMateria* materia) {
  if (num_materias_ >= kMaxMaterias) {
    return;
  }
  materia_inventory_[num_materias_] = materia;
  ++num_materias_;
}

void Character::unequip(int materia_i) {
  if (num_disposed_materias_ >= kMaxDisposedMaterias) {
    std::cout << "Sorry, you cannot dispose materias more" << std::endl;
    return;
  }
  if (num_materias_ <= 0) {
    return;
  }
  if (materia_i < 0) {
    return;
  }
  if (materia_i >= num_materias_) {
    return;
  }
  materias_to_delete_[num_disposed_materias_] = materia_inventory_[materia_i];
  ++num_disposed_materias_;

  for (int left = materia_i; left < num_materias_ - 1; left++) {
    materia_inventory_[left] = materia_inventory_[left + 1];
  }
  --num_materias_;
}

void Character::use(int materia_i, ICharacter& target) {
  if (num_materias_ <= 0) {
    return;
  }
  if (materia_i > num_materias_) {
    return;
  }
  materia_inventory_[materia_i]->use(target);
}
