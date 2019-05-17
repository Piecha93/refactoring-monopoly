//
// Created by tpiecha on 17.05.2019.
//

#ifndef REFACTORING_SQUAREBLACKHOLE_H
#define REFACTORING_SQUAREBLACKHOLE_H


#include "Square.h"

class SquareBlackHole : public Square
{
private:
  std::unique_ptr<Square> square;
  bool isActive = false;
public:
  SquareBlackHole() = delete;
  SquareBlackHole(std::unique_ptr<Square> &&square);

  void standOnAction(Player &player) override;
  void goThroughAction(Player &player) override;

  void switchBlackHole();
};


#endif //REFACTORING_SQUAREBLACKHOLE_H
