//
// Created by szozda on 15.05.2019.
//

#include "SquareCash.h"

SquareCash::SquareCash(unsigned ammount) : ammount(ammount) {

}

void SquareCash::standOnAction(PlayerState &player) {
  std::cout << "Player " << player.getName() << " received " << ammount << std::endl;
  player.addCredit(ammount);
}

void SquareCash::goThroughAction(PlayerState &player) {

}
