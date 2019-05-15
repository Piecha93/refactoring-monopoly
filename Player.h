//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_PLAYER_H
#define REFACTORING_PLAYER_H


#include "Piece.h"
#include "Die.h"
#include "Board.h"

class Player
{
public:
  explicit Player(std::shared_ptr<Board> board);
  void move();

private:
  Die   die;
  std::unique_ptr<Piece> piece;
  std::shared_ptr<Board> board;

};


#endif //REFACTORING_PLAYER_H
