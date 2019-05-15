//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_SQUAREDEPOSIT_H
#define REFACTORING_SQUAREDEPOSIT_H


#include "Square.h"


class SquareDeposit : public Square
{
  unsigned depositValue = 0;

public:
  void standOnAction(Player &player) override;
  void goThroughAction(Player &player) override;
};


#endif //REFACTORING_SQUAREDEPOSIT_H
