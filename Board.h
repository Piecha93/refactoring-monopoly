//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_BOARD_H
#define REFACTORING_BOARD_H


#include <vector>
#include <memory>
#include "Square.h"

#include "SquareIterator.h"

class Board
{
  static const unsigned numOfSquares = 40;
private:
  std::vector<std::shared_ptr<Square>> squares;

public:
  Board();

  std::unique_ptr<SquareIterator> getSquareIterator()
  {
    return std::make_unique<SquareIterator>(squares);
  }
};

#endif //REFACTORING_BOARD_H
