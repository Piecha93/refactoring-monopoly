//
// Created by tpiecha on 15.05.2019.
//

#include <algorithm>
#include "Board.h"

Board::Board()
{
  for(unsigned i = 0; i < Board::numOfSquares; i++)
  {
    squares.push_back(std::make_shared<Square>(i));
  }
}

std::weak_ptr<Square> Board::getFirstSquare()
{
  return squares.front();
}

std::weak_ptr<Square> Board::getOffsetSquare(std::weak_ptr<Square> square, unsigned offset)
{
  unsigned newIndex = (square.lock()->getId() + offset) % Board::numOfSquares;
  return squares[newIndex];
}
