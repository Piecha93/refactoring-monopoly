//
// Created by Tomek on 15/05/2019.
//

#include <iostream>
#include "SquareStart.h"

SquareStart::SquareStart(int startBonus) : startBonus(startBonus) {

}

void SquareStart::standOnAction(Player &player) {

}

void SquareStart::goThroughAction(Player &player) {
  std::cout << "Player " << player.getName() << " go through start and get " << startBonus << std::endl;
  player.changeCredit(startBonus);
}
