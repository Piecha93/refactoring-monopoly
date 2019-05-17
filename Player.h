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

  void addCredit(unsigned value);
  void decCredit(unsigned value);

  bool isBankrupt();
  int getCredit() const;
  std::string getName() const;
  void imprison(unsigned lengthOfImprisonment);

  void makeTurn();

  virtual bool makeBuyDecision(unsigned price) = 0;

  virtual ~Player() {}

private:
  bool isPrisoned();
  void move();

  Die die;
  SquareIterator squareIterator;
  std::string name;
  int credit;
  unsigned timeToReleasePrison = 0;
};

#endif // REFACTORING_PLAYER_H
