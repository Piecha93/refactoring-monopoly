#include <utility>

#include <iostream>
#include <utility>

//
// Created by tpiecha on 15.05.2019.
//

#include "Player.h"
#include "squares/Square.h"

Player::Player(std::string name, SquareIterator squareIterator)
    : name(std::move(name)), squareIterator(squareIterator) {}

void Player::makeTurn() {
  if (!isPrisoned()) {
    move();
  } else {
    --timeToReleasePrison;
  }
}

void Player::move() {
  auto dieResult = this->die.roll();

  std::cout << this->name << ": move " << dieResult << " squares " << std::endl;

  for (size_t i = 0; i < dieResult; i++) {
    auto square = this->squareIterator.next();

    if (i != (dieResult - 1)) {
      square->goThroughAction(*this);
    }
  }

  this->squareIterator.get()->standOnAction(*this);
}

void Player::addCredit(unsigned value) { credit += value; }

void Player::decCredit(unsigned value) { credit -= value; }

bool Player::isBankrupt() { return credit < 0; }

std::string Player::getName() const { return name; }

int Player::getCredit() const { return credit; }

void Player::imprison(unsigned lengthOfImprisonment) {
  timeToReleasePrison = lengthOfImprisonment;
}

bool Player::isPrisoned() { return timeToReleasePrison > 0; }
