//
// Created by tpiecha on 17.05.2019.
//

#ifndef REFACTORING_HUMANPLAYER_H
#define REFACTORING_HUMANPLAYER_H

#include "PlayerState.h"

class HumanPlayer : public PlayerState {
public:
  HumanPlayer() = delete;
  HumanPlayer(std::string name, SquareIterator squareIterator);
  bool makeBuyDecision(unsigned price) override;
};


#endif //REFACTORING_HUMANPLAYER_H
