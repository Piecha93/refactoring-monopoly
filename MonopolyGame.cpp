//
// Created by tpiecha on 15.05.2019.
//

#include <iostream>
#include "MonopolyGame.h"

MonopolyGame::MonopolyGame(int numOfPlayers)
{
  std::cout << "BBBBB";
  board = std::make_shared<Board>();

  for (int i = 0; i < numOfPlayers; i++)
  {
    players.push_back(Player(board));
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
  std::cout << "AAAAA";
//  while (players.size() > 1)
  {
    for (auto &player : players)
    {
      player.move();
    }
  }
}
