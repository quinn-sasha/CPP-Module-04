#ifndef EX03_INCLUDE_IMATERIASOURCE_HPP_
#define EX03_INCLUDE_IMATERIASOURCE_HPP_

#include "AMateria.hpp"

class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif  // EX03_INCLUDE_IMATERIASOURCE_HPP_
