//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_PLAYER_H
#define REFACTORING_PLAYER_H

#include "Die.h"
#include "squares/SquareIterator.h"

class Player {
public:
    explicit Player(std::string name, SquareIterator squareIterator);

    void move();

    void changeCredit(int changeBy);
    bool isBankrupt();
    int getCredit();
    std::string getName();

private:
    Die die;
    SquareIterator squareIterator;
    std::string name;
    int credit;

};


#endif //REFACTORING_PLAYER_H
