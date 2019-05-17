//
// Created by szozda on 15.05.2019.
//

#ifndef REFACTORING_SQUARECASH_H
#define REFACTORING_SQUARECASH_H

#include <iostream>
#include "Square.h"

class SquareCash : public Square {
private:
  unsigned ammount;

public:
    SquareCash() = delete;
    SquareCash(unsigned ammount);

    void standOnAction(PlayerState &player) override;
    void goThroughAction(PlayerState &player) override;
};


#endif //REFACTORING_SQUARECASH_H
