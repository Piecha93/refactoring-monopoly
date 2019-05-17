//
// Created by szozda on 17.05.2019.
//

#ifndef REFACTORING_SQUAREPRISON_HPP
#define REFACTORING_SQUAREPRISON_HPP


#include "Square.h"

class SquarePrison : public Square{
public:
  SquarePrison(unsigned int lengthOtImprisonment);
  void standOnAction(Player &player) override;
  void goThroughAction(Player &player) override;

private:
  unsigned lengthOtImprisonment;
};


#endif //REFACTORING_SQUAREPRISON_HPP
