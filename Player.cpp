#include <utility>

#include <utility>
#include <iostream>

//
// Created by tpiecha on 15.05.2019.
//

#include "Player.h"

Player::Player(std::string name, std::unique_ptr<SquareIterator> squareIterator) : name(std::move(name)), squareIterator(std::move(squareIterator))
{
}

void Player::move()
{
  auto dieResult = die.roll();
  for(size_t i = 0; i < dieResult; i++)
  {
    auto square = squareIterator->next();
//    square->goThroughAction(this);
  }

//  squareIterator->get().standAction(this);

  std::cout << name << ": ruszylem sie o " << dieResult << std::endl;
}

