//
// Created by szozda on 17.05.2019.
//

#include <iostream>
#include "SquareProperty.hpp"

SquareProperty::SquareProperty(const std::string &name, int value,
                               int visitCost)
        : name(name), price(value), visitCost(visitCost) {}

void SquareProperty::standOnAction(PlayerState &player) {
  if (isBought) {
    if (!isOwner(player)) {
      player.decCredit(visitCost);
      std::cout << "Player " << player.getName() << " paid " << visitCost << " to " << owner->getName() << std::endl;
    }
  } else {
    offerPurchase(player);
  }
}

void SquareProperty::goThroughAction(PlayerState &player) {}

void SquareProperty::offerPurchase(PlayerState &player) {

  if (hasPlayerMoneyToBuy(player) && player.makeBuyDecision(price)) {
    isBought = true;
    owner = &player;
    std::cout << "Player " << player.getName() << " bought " << name << std::endl;
  }
}

bool SquareProperty::hasPlayerMoneyToBuy(const PlayerState &player) const
{ return player.getCredit() >= price; }

bool SquareProperty::isOwner(PlayerState &player) {
  return owner->getName() == player.getName();
}
