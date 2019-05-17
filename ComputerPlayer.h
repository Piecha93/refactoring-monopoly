//
// Created by tpiecha on 17.05.2019.
//

#ifndef REFACTORING_COMPUTERPLAYER_H
#define REFACTORING_COMPUTERPLAYER_H

#include "Player.h"

enum class ComputerPlayerMode {
  Greedy,
  Random
};

class ComputerPlayer : public Player {
private:
  ComputerPlayerMode mode;
public:
  ComputerPlayer() = delete;
  ComputerPlayer(std::string name, SquareIterator squareIterator, const ComputerPlayerMode &mode);

  bool makeBuyDecision(unsigned price) override;

  bool isGreedy() const;

  bool isRandom() const;
};


#endif //REFACTORING_COMPUTERPLAYER_H
