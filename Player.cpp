#include <utility>

#include <utility>
#include <iostream>

//
// Created by tpiecha on 15.05.2019.
//

#include "Player.h"
#include "squares/Square.h"

Player::Player(std::string name, SquareIterator squareIterator) : name(std::move(name)),
                                                                  squareIterator(squareIterator) {
}

void Player::move() {
  auto dieResult = die.roll();

  std::cout << name << ": move " << dieResult << " squares " << std::endl;

  for (size_t i = 0; i < dieResult; i++) {
    auto square = squareIterator.next();

    if(i != (dieResult - 1)) {
      square->goThroughAction(*this);
    }
  }

  squareIterator.get()->standOnAction(*this);
}

void Player::addCredit(unsigned value) {
  credit += value;
}

void Player::decCredit(unsigned value) {
  credit -= value;
}

bool Player::isBankrupt() {
  return credit < 0;
}

std::string Player::getName() const {
  return name;
}

int Player::getCredit() const {
  return credit;
}
