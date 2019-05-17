//
// Created by szozda on 17.05.2019.
//

#include <iostream>
#include "SquarePrison.hpp"

void SquarePrison::standOnAction(PlayerState &player) {
  std::cout<<"player is prisoned for 3 moves";
  player.imprison(lengthOfImprisonment);
}

void SquarePrison::goThroughAction(PlayerState &player) {

}

SquarePrison::SquarePrison(unsigned int lengthOtImprisonment) : lengthOfImprisonment(lengthOtImprisonment) {}
