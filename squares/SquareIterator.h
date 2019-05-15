//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_SQUAREITERATOR_H
#define REFACTORING_SQUAREITERATOR_H

#include <vector>
#include <memory>

class Square;

class SquareIterator {
private:
    std::vector<std::shared_ptr<Square>> &squares;
    unsigned currentIdx = 0;
public:
    SquareIterator(std::vector<std::shared_ptr<Square>> &squares);

    std::shared_ptr<Square> get();
    std::shared_ptr<Square> next();
};

#endif //REFACTORING_SQUAREITERATOR_H
