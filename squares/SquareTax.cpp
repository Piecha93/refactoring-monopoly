//
// Created by tpiecha on 17.05.2019.
//

#include <iostream>
#include "SquareTax.h"

SquareTax::SquareTax(unsigned ammount) : ammount(ammount) {

}

void SquareTax::standOnAction(PlayerState &player) {
  std::cout << "Player " << player.getName() << " paid tax " << ammount << std::endl;
  player.decCredit(ammount);
}

void SquareTax::goThroughAction(PlayerState &player) {

}


