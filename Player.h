//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_PLAYER_H
#define REFACTORING_PLAYER_H

#include "Die.h"
#include "squares/SquareIterator.h"

class Player {
public:
  explicit Player(std::string name, SquareIterator squareIterator);

  void move();

  void addCredit(unsigned value);
  void decCredit(unsigned value);

  bool isBankrupt();
  int getCredit() const;
  std::string getName() const;
  bool makeBuyDecision(int value);

private:
  Die die;
  SquareIterator squareIterator;
  std::string name;
  int credit;
};

#endif // REFACTORING_PLAYER_H
