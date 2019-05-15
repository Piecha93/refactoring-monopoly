//
// Created by tpiecha on 15.05.2019.
//

#include <iostream>
#include "MonopolyGame.h"

MonopolyGame::MonopolyGame(int numOfPlayers)
{
  board = std::make_shared<Board>();

  for (int i = 0; i < numOfPlayers; i++)
  {
    players.emplace_back(board);
  }

}

void MonopolyGame::initGame()
{
  for (auto &player : players)
  {
  }
}

void MonopolyGame::mainLoop()
{
//  while (players.size() > 1)
  {
    for (auto &player : players)
    {
      player.move();
    }
  }
}
