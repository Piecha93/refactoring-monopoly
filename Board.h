//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_BOARD_H
#define REFACTORING_BOARD_H


#include <vector>
#include <memory>
#include "Square.h"

class Board
{
  static const unsigned numOfSquares = 40;
private:
  std::vector<std::shared_ptr<Square>> squares;

public:
  Board();

  std::weak_ptr<Square> getFirstSquare();
  std::weak_ptr<Square> getOffsetSquare(std::weak_ptr<Square> square, unsigned offset);
};


#endif //REFACTORING_BOARD_H
