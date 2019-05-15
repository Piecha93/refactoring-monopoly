//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_MONOPOLYGAME_H
#define REFACTORING_MONOPOLYGAME_H


#include "Board.h"
#include "Player.h"
#include "Die.h"

class MonopolyGame
{
public:
  MonopolyGame(int numOfPlayers);

  void mainLoop();
  void initGame();


private:
  std::vector<Player> players;
  unsigned currentPlayer = 0;

  std::shared_ptr<Board> board;
};


#endif //REFACTORING_MONOPOLYGAME_H
