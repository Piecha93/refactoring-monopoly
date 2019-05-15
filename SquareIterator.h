//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_SQUAREITERATOR_H
#define REFACTORING_SQUAREITERATOR_H

#include <vector>
#include <memory>
#include "Square.h"

class Board;

class SquareIterator
{
private:
  std::vector<std::shared_ptr<Square>> squares;
  unsigned currentIdx;
public:
  SquareIterator(std::vector<std::shared_ptr<Square>> squares) : squares(squares)
  {
  }

  std::shared_ptr<Square> get();
  std::shared_ptr<Square> next();
};

#endif //REFACTORING_SQUAREITERATOR_H
