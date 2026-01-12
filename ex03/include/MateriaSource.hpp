#ifndef EX03_INCLUDE_MATERIASOURCE_HPP_
#define EX03_INCLUDE_MATERIASOURCE_HPP_

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
  static const int kMaxMaterias = 4;
  int num_materias_;
  AMateria* materias_[kMaxMaterias];

 public:
  MateriaSource();
  MateriaSource(const MateriaSource& other);
  MateriaSource& operator=(const MateriaSource& other);
  ~MateriaSource();

  void learnMateria(AMateria* materia);              // override
  AMateria* createMateria(const std::string& type);  // override
};

#endif  // EX03_INCLUDE_MATERIASOURCE_HPP_
