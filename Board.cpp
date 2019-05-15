//
// Created by tpiecha on 15.05.2019.
//

#include <algorithm>
#include "Board.h"

Board::Board()
{
  for(unsigned i = 0; i < Board::numOfSquares; i++)
  {
    squares.push_back(std::make_shared<Square>());
  }
}

std::weak_ptr<Square> Board::getFirstSquare()
{
  return squares.front();
}

std::weak_ptr<Square> Board::getOffsetSquare(std::weak_ptr<Square> square, unsigned offset)
{
  auto it = std::find(squares.begin(), squares.end(), square.lock());
  auto index = std::distance(squares.begin(), it);
  auto newIndex = (index + offset) % Board::numOfSquares;

  return squares[newIndex];
}
