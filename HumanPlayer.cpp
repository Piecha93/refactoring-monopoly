#include <utility>

//
// Created by tpiecha on 17.05.2019.
//

#include <iostream>
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(std::string name, SquareIterator squareIterator) : Player(std::move(name), squareIterator)
{

}

bool HumanPlayer::makeBuyDecision(unsigned price)
{
  std::cout << "Do You want to buy property for " << price << "? (Y/N) You have "
  << getCredit() << " zl" << std::endl;

  std::string decision;
  std::cin >> decision;

  return decision == "Y";
}
