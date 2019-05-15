//
// Created by tpiecha on 15.05.2019.
//

#include "SquareDeposit.h"
#include "Player.h"

void SquareDeposit::standOnAction(Player &player) {

}

void SquareDeposit::goThroughAction(Player &player) {
  player.changeCredit(-200);
  depositValue += 200;
}
