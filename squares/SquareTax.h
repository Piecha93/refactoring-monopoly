//
// Created by tpiecha on 17.05.2019.
//

#ifndef REFACTORING_SQUARETAX_H
#define REFACTORING_SQUARETAX_H

#include "Square.h"

class SquareTax : public Square {
private:
  unsigned ammount;

public:
  SquareTax() = delete;
  SquareTax(unsigned ammount);

  void standOnAction(PlayerState &player) override;
  void goThroughAction(PlayerState &player) override;

};


#endif //REFACTORING_SQUARETAX_H
