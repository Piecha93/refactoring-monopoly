#include <utility>
#include <iostream>

//
// Created by tpiecha on 15.05.2019.
//

#include "Player.h"

void Player::move()
{
  auto dieResult = die.roll();
  auto newSquare = board->getOffsetSquare(piece->getSquare() ,dieResult);

  piece->setSquare(newSquare);

  std::cout << "Ruszylem sie na " << piece->getSquare().lock()->getId() << std::endl;

}

Player::Player(std::shared_ptr<Board> board) : board(board)
{
  piece = std::make_unique<Piece>(board->getFirstSquare());
}
