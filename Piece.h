//
// Created by tpiecha on 15.05.2019.
//

#ifndef REFACTORING_PIECE_H
#define REFACTORING_PIECE_H


#include <memory>
#include "Square.h"

class Piece
{

public:
  Piece(std::weak_ptr<Square> square);

  std::weak_ptr<Square> getSquare();
  void setSquare(std::weak_ptr<Square> square);

private:
  std::weak_ptr<Square> square;
};


#endif //REFACTORING_PIECE_H
