//
// Created by szozda on 15.05.2019.
//

#ifndef REFACTORING_SQUAREPROPERTY_H
#define REFACTORING_SQUAREPROPERTY_H

#include "Square.h"

class SquareProperty : public Square {
public:
  void standOnAction(Player &player) override;
  void goThroughAction(Player &player) override;
};


#endif //REFACTORING_SQUAREPROPERTY_H
