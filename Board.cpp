#include <memory>

//
// Created by tpiecha on 15.05.2019.
//

#include "Board.h"
#include <algorithm>

#include "squares/SquareCash.h"
#include "squares/SquareDeposit.h"
#include "squares/SquarePrison.hpp"
#include "squares/SquareProperty.hpp"
#include "squares/SquareStart.h"
#include "squares/SquareTax.h"
#include "squares/SquareBlackHole.h"
#include <sstream>

Board::Board() {
  squares.push_back(std::make_shared<SquareStart>(500));
  for (unsigned i = 1; i < Board::numOfSquares; i++) {
    if (i % 10 == 3) {
      squares.push_back(std::make_shared<SquareDeposit>());
    } else if (i % 10 == 6) {
      squares.push_back(std::make_shared<SquareTax>(150));
    } else if (i % 10 == 7) {
      squares.push_back(std::make_shared<SquareCash>(100));
    } else if (i % 10 == 2 || i % 10 == 5 || i % 10 == 8) {
      constexpr unsigned lengthOfImprisonment = 3;
      squares.push_back(std::make_shared<SquarePrison>(lengthOfImprisonment));
    } else if (i % 10 == 8) {
      squares.push_back(std::make_shared<SquareBlackHole>(std::make_unique<SquareDeposit>()));
    } else {
      std::stringstream ss;
      ss << "name" << i;
      std::string s = ss.str();
      squares.push_back(
          std::make_shared<SquareProperty>(ss.str(), i * 10, i * 10 / 2));
    }
  }
}

SquareIterator Board::getSquareIterator() { return SquareIterator{squares}; }
