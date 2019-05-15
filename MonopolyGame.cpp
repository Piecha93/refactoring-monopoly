//
// Created by tpiecha on 15.05.2019.
//

#include <iostream>
#include "MonopolyGame.h"

MonopolyGame::MonopolyGame()
{
  board = std::make_shared<Board>();
}

void MonopolyGame::startGame()
{
  gameLoop();
}

void MonopolyGame::addPlayer(std::string name)
{
  players.emplace_back(name, board->getSquareIterator());
}

void MonopolyGame::gameLoop()
{
//  while (players.size() > 1)
  {
    for (auto &player : players)
    {
      player.move();
    }
  }
}
