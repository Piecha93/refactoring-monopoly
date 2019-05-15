//
// Created by tpiecha on 15.05.2019.
//

#include "Piece.h"

Piece::Piece(std::weak_ptr<Square> square): square(square)
{

}

void Piece::setSquare(std::weak_ptr<Square> square)
{
  this->square = square;
}

std::weak_ptr<Square> Piece::getSquare()
{
  return square;
}
