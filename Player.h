//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_PLAYER_H
#define REFACTORING_PLAYER_H

#include "Die.h"
#include "Board.h"
#include "SquareIterator.h"

class Player
{
public:
  explicit Player(std::string name, std::unique_ptr<SquareIterator> squareIterator);
  void move();

private:
  Die   die;
  std::unique_ptr<SquareIterator> squareIterator;
  std::string name;

};


#endif //REFACTORING_PLAYER_H
