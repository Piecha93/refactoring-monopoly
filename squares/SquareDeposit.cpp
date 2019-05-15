//
// Created by tpiecha on 15.05.2019.
//

#include <iostream>
#include "SquareDeposit.h"
#include "../Player.h"

void SquareDeposit::standOnAction(Player &player) {
  std::cout << "Player " << player.getName() << " took " << depositValue << " from deposit" << std::endl;

  player.changeCredit(depositValue);
  depositValue = 0;
}

void SquareDeposit::goThroughAction(Player &player) {
  std::cout << "Player " << player.getName() << " paid " << 200 << " to deposit" << std::endl;
  player.changeCredit(-200);
  depositValue += 200;
}
