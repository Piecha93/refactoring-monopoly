//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_SQUARE_H
#define REFACTORING_SQUARE_H

#include "../Player.h"

class Square {
public:
    Square() = default;

    virtual void standOnAction(Player &player) = 0;
    virtual void goThroughAction(Player &player) = 0;

    virtual ~Square() = default;
};


#endif //REFACTORING_SQUARE_H
