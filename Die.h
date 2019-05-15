//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_DIE_H
#define REFACTORING_DIE_H

#include <random>



class Die {
private:
public:
    Die() = default;

    unsigned roll() {
      std::random_device r;
      std::default_random_engine e1(r());
      std::uniform_int_distribution<unsigned> uniform_dist(2, 12);

      return uniform_dist(e1);
    }
};


#endif //REFACTORING_DIE_H
