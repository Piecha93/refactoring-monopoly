#include <memory>

//
// Created by tpiecha on 15.05.2019.
//

#include <iostream>
#include "MonopolyGame.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"

MonopolyGame::MonopolyGame() : board() {
}

void MonopolyGame::startGame() {
  gameLoop();
}

void MonopolyGame::addHumanPlayer(const std::string& name) {
  players.emplace_back(std::make_shared<HumanPlayer>(name, board.getSquareIterator()));
}

void MonopolyGame::addComputerPlayer(const std::string& name, const ComputerPlayerMode &mode) {
  players.push_back(std::make_shared<ComputerPlayer>(name, board.getSquareIterator(), mode));
}

void MonopolyGame::gameLoop() {
//  while (players.size() > 1)
  for(size_t i = 0; i < 150; i++) {
    for (auto &player : players) {
      player->makeTurn();
      std::cout << std::endl;
    }
  }

  printResults();
}

void MonopolyGame::printResults() const {
  for (auto &player : players)
  {
    std::cout << "Player " << player->getName() << " finished with bank: " << player->getCredit() << std::endl;
  }
}
