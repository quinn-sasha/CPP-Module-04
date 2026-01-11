#ifndef EX01_BRAIN_HPP_
#define EX01_BRAIN_HPP_

#include <string>

class Brain {
  static const int kMaxIdeas = 100;
  std::string ideas[kMaxIdeas];

public:
  Brain();
  Brain(const Brain& other);
  Brain& operator=(const Brain& other);
  ~Brain();
};

#endif // EX01_BRAIN_HPP_
