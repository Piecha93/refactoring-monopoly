//
// Created by tpiecha on 15.05.2019.
//

#include <iostream>
#include "MonopolyGame.h"

MonopolyGame::MonopolyGame() : board() {
}

void MonopolyGame::startGame() {
  gameLoop();
}

void MonopolyGame::addPlayer(std::string name) {
  players.emplace_back(name, board.getSquareIterator());
}

void MonopolyGame::gameLoop() {
//  while (players.size() > 1)
  for(size_t i = 0; i < 150; i++) {
    for (auto &player : players) {
      player.move();
      std::cout << std::endl;
    }
  }

  printResults();
}

void MonopolyGame::printResults() const
{
  for (auto &player : players)
  {
    std::cout << "Player " << player.getName() << " finished with bank: " << player.getCredit() << std::endl;
  }
}
