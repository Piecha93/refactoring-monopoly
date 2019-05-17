//
// Created by Tomek on 15/05/2019.
//

#ifndef REFACTORING_SQUARESTART_H
#define REFACTORING_SQUARESTART_H

#include "Square.h"

class SquareStart : public Square {
  unsigned startBonus;
public:
  SquareStart() = delete;

  explicit SquareStart(unsigned startBonus);

  void standOnAction(Player &player) override;
  void goThroughAction(Player &player) override;
};


#endif //REFACTORING_SQUARESTART_H
