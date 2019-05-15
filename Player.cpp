#include <utility>

#include <utility>
#include <iostream>

//
// Created by tpiecha on 15.05.2019.
//

#include "Player.h"

Player::Player(std::string name, std::shared_ptr<Board> board) : name(std::move(name)), board(board)
{
  piece = std::make_unique<Piece>(board->getFirstSquare());
}

void Player::move()
{
  auto dieResult = die.roll();
  auto newSquare = board->getOffsetSquare(piece->getSquare() ,dieResult);

  piece->setSquare(newSquare);

  std::cout << name << ": ruszylem sie o " << dieResult << std::endl;
}

