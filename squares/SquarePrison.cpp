//
// Created by szozda on 17.05.2019.
//

#include <iostream>
#include "SquarePrison.hpp"

void SquarePrison::standOnAction(Player &player) {
  std::cout<<"player is prisoned for 3 moves";
  player.imprison(lengthOtImprisonment);
}

void SquarePrison::goThroughAction(Player &player) {

}

SquarePrison::SquarePrison(unsigned int lengthOtImprisonment) : lengthOtImprisonment(lengthOtImprisonment) {}
