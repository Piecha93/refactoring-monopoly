//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_MONOPOLYGAME_H
#define REFACTORING_MONOPOLYGAME_H

#include <memory>
#include "ComputerPlayer.h"
#include "Board.h"
#include "PlayerState.h"
#include "Die.h"

class MonopolyGame {
public:
    MonopolyGame();

    void startGame();
    void addHumanPlayer(const std::string& name);
    void addComputerPlayer(const std::string& name, const ComputerPlayerMode &mode);

private:
    Board board;
    std::vector<std::shared_ptr<PlayerState>> players;

    void gameLoop();

  void printResults() const;
};


#endif //REFACTORING_MONOPOLYGAME_H
