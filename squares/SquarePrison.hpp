//
// Created by szozda on 17.05.2019.
//

#ifndef REFACTORING_SQUAREPRISON_HPP
#define REFACTORING_SQUAREPRISON_HPP


#include "Square.h"

class SquarePrison : public Square{
public:
  SquarePrison(unsigned int lengthOtImprisonment);
  void standOnAction(PlayerState &player) override;
  void goThroughAction(PlayerState &player) override;

private:
  unsigned lengthOfImprisonment;
};


#endif //REFACTORING_SQUAREPRISON_HPP
