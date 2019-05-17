//
// Created by tpiecha on 15.05.2019.
//

#include <iostream>
#include "SquareDeposit.h"
#include "../PlayerState.h"

void SquareDeposit::standOnAction(PlayerState &player) {
  std::cout << "Player " << player.getName() << " took " << depositValue << " from deposit" << std::endl;

  player.addCredit(depositValue);
  depositValue = 0;
}

void SquareDeposit::goThroughAction(PlayerState &player) {
  std::cout << "Player " << player.getName() << " paid " << 200 << " to deposit" << std::endl;
  player.decCredit(200);
  depositValue += 200;
}
