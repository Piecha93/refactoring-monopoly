//
// Created by tpiecha on 15.05.2019.
//

#include <iostream>
#include "SquareIterator.h"

SquareIterator::SquareIterator(std::vector<std::shared_ptr<Square>> &squares) : squares(squares) {

}

std::shared_ptr<Square> SquareIterator::get() {
  return squares[currentIdx];
}

std::shared_ptr<Square> SquareIterator::next() {
  currentIdx++;
  if (currentIdx >= squares.size()) {
    currentIdx = 0;
  }
  return get();
}
