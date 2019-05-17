#include <utility>

#include <iostream>
#include <utility>

//
// Created by tpiecha on 15.05.2019.
//

#include "PlayerState.h"
#include "squares/Square.h"

PlayerState::PlayerState(std::string name, SquareIterator squareIterator)
    : name(std::move(name)), squareIterator(squareIterator) {}

void PlayerState::makeTurn() {
  if (!isPrisoned()) {
    move();
  } else {
    --timeToReleasePrison;
  }
}

void PlayerState::move() {
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

void PlayerState::addCredit(unsigned value) { credit += value; }

void PlayerState::decCredit(unsigned value) { credit -= value; }

bool PlayerState::isBankrupt() { return credit < 0; }

std::string PlayerState::getName() const { return name; }

int PlayerState::getCredit() const { return credit; }

void PlayerState::imprison(unsigned lengthOfImprisonment) {
  timeToReleasePrison = lengthOfImprisonment;
}

bool PlayerState::isPrisoned() { return timeToReleasePrison > 0; }
