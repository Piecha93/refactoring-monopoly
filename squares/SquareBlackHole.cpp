//
// Created by tpiecha on 17.05.2019.
//

#include <iostream>
#include "SquareBlackHole.h"

SquareBlackHole::SquareBlackHole(std::unique_ptr<Square> &&square) : square(std::move(square)) {

}

void SquareBlackHole::standOnAction(Player &player) {
  if(isActive) {
    std::cout << "Player " << player.getName() << " stood on active   black hole" << std::endl;
  } else {
    std::cout << "Player " << player.getName() << " stood on inactive black hole" << std::endl;
    square->standOnAction(player);
  }
  switchBlackHole();
}

void SquareBlackHole::switchBlackHole() {
  isActive = !isActive;
}

void SquareBlackHole::goThroughAction(Player &player) {
  if(isActive) {
    std::cout << "Player " << player.getName() << " go through active   black hole" << std::endl;
  } else {
    std::cout << "Player " << player.getName() << " go through inactive black hole" << std::endl;
    square->goThroughAction(player);
  }
}
