//
// Created by tpiecha on 15.05.2019.
//

#include <algorithm>
#include "Board.h"

Board::Board()
{
  for(unsigned i = 0; i < Board::numOfSquares; i++)
  {
    squares.push_back(std::shared_ptr<Square>());
  }
}

