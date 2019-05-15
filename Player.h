//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_PLAYER_H
#define REFACTORING_PLAYER_H

#include "Die.h"
#include "Board.h"

class Player
{
public:
  explicit Player(std::string name, std::shared_ptr<Board> board);
  void move();

private:
  Die   die;
  std::weak_ptr<Square> square;
  std::shared_ptr<Board> board;
  std::string name;

};


#endif //REFACTORING_PLAYER_H
