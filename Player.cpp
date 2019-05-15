#include <utility>
#include <iostream>

//
// Created by tpiecha on 15.05.2019.
//

#include "Player.h"

void Player::move()
{
  std::cout << "asd";
  auto dieResult = die.roll();
  board->getOffsetSquare(piece->getSquare() ,dieResult);

  std::cout << "Ruszylem sie na " << piece->getSquare().lock()->getId();

}

Player::Player(std::shared_ptr<Board> board) : board(std::move(board))
{
  piece = std::make_unique<Piece>(board->getFirstSquare());
}
