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

  std::cout << name << ": ruszam sie o " << dieResult << std::endl;

  for (size_t i = 0; i < dieResult; i++) {
    auto square = squareIterator.next();

    if(i != (dieResult - 1)) {
      square->goThroughAction(*this);
    }
  }

  squareIterator.get()->standOnAction(*this);

  std::cout << std::endl;
}

void Player::changeCredit(int changeBy) {
  credit += changeBy;
}

bool Player::isBankrupt() {
  return credit <= 0;
}

std::string Player::getName() {
  return name;
}

int Player::getCredit() {
  return credit;
}
