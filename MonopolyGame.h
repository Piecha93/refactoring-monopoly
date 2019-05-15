//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_MONOPOLYGAME_H
#define REFACTORING_MONOPOLYGAME_H


#include "Board.h"
#include "Player.h"
#include "Die.h"

class MonopolyGame {
public:
    MonopolyGame();

    void startGame();
    void addPlayer(std::string name);

private:
    std::shared_ptr<Board> board;
    std::vector<Player> players;

    void gameLoop();
};


#endif //REFACTORING_MONOPOLYGAME_H
