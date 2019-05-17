//
// Created by szozda on 17.05.2019.
//

#ifndef REFACTORING_SQUAREPROPERTY_HPP
#define REFACTORING_SQUAREPROPERTY_HPP

#include "Square.h"

class SquareProperty : Square {
public:
  SquareProperty(const std::string &name, int value, int visitCost);
  void standOnAction(Player &player) override;
  void goThroughAction(Player &player) override;

private:
  bool isOwner(Player &player);
  void offerPurchase(Player &player);

  std::string name;
  int value;
  int visitCost;
  std::shared_ptr<Player> owner;
  bool isBought = false;
};

#endif // REFACTORING_SQUAREPROPERTY_HPP
