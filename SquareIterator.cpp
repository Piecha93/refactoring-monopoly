//
// Created by tpiecha on 15.05.2019.
//

#include "SquareIterator.h"

std::shared_ptr<Square> SquareIterator::get()
{
  return squares[currentIdx];
}

std::shared_ptr<Square> SquareIterator::next()
{
  currentIdx++;
  if(currentIdx > squares.size()) {
    currentIdx = 0;
  }
  return get();
}
