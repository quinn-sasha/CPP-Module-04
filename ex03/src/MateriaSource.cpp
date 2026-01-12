#include <iostream>
#include <string>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : num_materias_(0) {
  std::cout << "MateriaSource constructor called" << std::endl;
  for (int i = 0; i < kMaxMaterias; i++) {
    materias_[i] = 0;
  }
}

MateriaSource::MateriaSource(const MateriaSource& other)
    : num_materias_(other.num_materias_) {
  for (int i = 0; i < num_materias_; i++) {
    materias_[i] = other.materias_[i]->clone();
  }
  std::cout << "MateriaSource copy-constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
  if (this == &other) {
    return *this;
  }
  for (int i = 0; i < num_materias_; i++) {
    delete materias_[i];
  }
  for (int i = 0; i < other.num_materias_; i++) {
    materias_[i] = other.materias_[i]->clone();
  }
  num_materias_ = other.num_materias_;
  return *this;
}

MateriaSource::~MateriaSource() {
  std::cout << "MateriaSource destructor called" << std::endl;
  for (int i = 0; i < num_materias_; i++) {
    delete materias_[i];
  }
}

void MateriaSource::learnMateria(AMateria* materia) {
  if (num_materias_ >= kMaxMaterias) {
    return;
  }
  materias_[num_materias_] = materia;
  ++num_materias_;
}

AMateria* MateriaSource::createMateria(const std::string& type) {
  if (num_materias_ == 0) {
    return 0;
  }
  for (int i = 0; i < num_materias_; i++) {
    if (materias_[i]->getType() == type) {
      return materias_[i]->clone();
    }
  }
  return 0;
}
