//
// Created by szozda on 15.05.2019.
//

#include "SquareCash.h"

SquareCash::SquareCash(int ammount) : ammount(ammount) {

}

void SquareCash::standOnAction(Player &player) {
  std::cout << "Player " << player.getName() << " received " << ammount << std::endl;
  player.changeCredit(ammount);
}

void SquareCash::goThroughAction(Player &player) {

}