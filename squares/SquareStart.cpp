//
// Created by Tomek on 15/05/2019.
//

#include <iostream>
#include "SquareStart.h"

SquareStart::SquareStart(unsigned startBonus) : startBonus(startBonus) {

}

void SquareStart::standOnAction(PlayerState &player) {

}

void SquareStart::goThroughAction(PlayerState &player) {
  std::cout << "Player " << player.getName() << " go through start and get " << startBonus << std::endl;
  player.addCredit(startBonus);
}
