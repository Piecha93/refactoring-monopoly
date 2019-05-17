//
// Created by szozda on 17.05.2019.
//

#include "SquareProperty.hpp"

void SquareProperty::standOnAction(Player &player) {
  if (isBought) {
    if (!isOwner(player)) {
      player.decCredit(visitCost);
    }
  } else {
    offerPurchase(player);
  }
}

void SquareProperty::goThroughAction(Player &player) {}

void SquareProperty::offerPurchase(Player &player) {
  if (player.makeBuyDecision(value)) {
    isBought == true;
    owner = std::make_shared<Player>(player);
  }
}

bool SquareProperty::isOwner(Player &player) {
  return owner.get() == &player; // TODO SZOZDA check if owner is properly checked
}

SquareProperty::SquareProperty(const std::string &name, int value,
                               int visitCost)
    : name(name), value(value), visitCost(visitCost) {}
