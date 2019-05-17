#include <utility>

//
// Created by tpiecha on 17.05.2019.
//

#include "ComputerPlayer.h"

ComputerPlayer::ComputerPlayer(std::string name,
                               SquareIterator squareIterator,
                               const ComputerPlayerMode &mode) :
                               PlayerState(std::move(name), squareIterator), mode(mode)
{

}

bool ComputerPlayer::makeBuyDecision(unsigned price)
{
  if (isGreedy())
  {
    return true;
  } else if (isRandom())
  {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::bernoulli_distribution d(0.5);
    d(gen);
  }
}

bool ComputerPlayer::isRandom() const
{
  return mode == ComputerPlayerMode::Random;
}

bool ComputerPlayer::isGreedy() const
{
  return mode == ComputerPlayerMode::Greedy;
}