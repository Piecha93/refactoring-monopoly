//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_BOARD_H
#define REFACTORING_BOARD_H


#include <vector>
#include <memory>
#include "squares/Square.h"

#include "squares/SquareIterator.h"

class Board {
    static const unsigned numOfSquares = 40;
private:
    std::vector<std::shared_ptr<Square>> squares;

public:
    Board();

    SquareIterator getSquareIterator();
};

#endif //REFACTORING_BOARD_H
