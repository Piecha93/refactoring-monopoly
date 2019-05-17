//
// Created by szozda on 17.05.2019.
//

#include <iostream>
#include "SquareProperty.hpp"

SquareProperty::SquareProperty(const std::string &name, int value,
                               int visitCost)
        : name(name), price(value), visitCost(visitCost) {}

void SquareProperty::standOnAction(Player &player) {
  if (isBought) {
    if (!isOwner(player)) {
      player.decCredit(visitCost);
      std::cout << "Player " << player.getName() << " paid " << visitCost << " to " << owner->getName() << std::endl;
    }
  } else {
    offerPurchase(player);
  }
}

void SquareProperty::goThroughAction(Player &player) {}

void SquareProperty::offerPurchase(Player &player) {

  if (hasPlayerMoneyToBuy(player) && player.makeBuyDecision(price)) {
    isBought = true;
    owner = &player;
    std::cout << "Player " << player.getName() << " bought " << name << std::endl;
  }
}

bool SquareProperty::hasPlayerMoneyToBuy(const Player &player) const
{ return player.getCredit() >= price; }

bool SquareProperty::isOwner(Player &player) {
  return owner->getName() == player.getName();
}
