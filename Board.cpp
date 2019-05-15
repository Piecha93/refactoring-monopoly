#include <memory>

//
// Created by tpiecha on 15.05.2019.
//

#include <algorithm>
#include "Board.h"

#include "squares/SquareCash.h"
#include "squares/SquareStart.h"
#include "squares/SquareDeposit.h"

Board::Board() {
  squares.push_back(std::make_shared<SquareStart>(500));
  for (unsigned i = 1; i < Board::numOfSquares; i++) {
    if(i % 5) {
      squares.push_back(std::make_shared<SquareCash>(i * 100));
    } else {
      squares.push_back(std::make_shared<SquareDeposit>());
    }
  }
}

SquareIterator Board::getSquareIterator() {
  return SquareIterator{squares};
}
