//
// Created by szozda on 17.05.2019.
//

#ifndef REFACTORING_SQUAREPROPERTY_HPP
#define REFACTORING_SQUAREPROPERTY_HPP

#include "Square.h"

class SquareProperty : public Square {
public:
  SquareProperty(const std::string &name, int value, int visitCost);
  void standOnAction(PlayerState &player) override;
  void goThroughAction(PlayerState &player) override;

private:
  bool isOwner(PlayerState &player);
  void offerPurchase(PlayerState &player);

  std::string name;
  int price;
  int visitCost;
  PlayerState *owner;
  bool isBought = false;

  bool hasPlayerMoneyToBuy(const PlayerState &player) const;
};

#endif // REFACTORING_SQUAREPROPERTY_HPP
