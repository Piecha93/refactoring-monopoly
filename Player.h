//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_PLAYER_H
#define REFACTORING_PLAYER_H

#include "Die.h"
#include "SquareIterator.h"

class Player
{
public:
  explicit Player(std::string name, std::unique_ptr<SquareIterator> squareIterator);
  void move();
  void changeCredit(int changeBy);
  bool isBankrupt();

private:
  Die   die;
  std::unique_ptr<SquareIterator> squareIterator;
  std::string name;
  int credit;

};


#endif //REFACTORING_PLAYER_H
