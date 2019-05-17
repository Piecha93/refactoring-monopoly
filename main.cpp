#include <iostream>
#include "MonopolyGame.h"


int main() {
  int numOfPlayers;

  MonopolyGame monopolyGame;

  monopolyGame.addPlayer("Jeden");
  monopolyGame.addPlayer("Dwa");

  monopolyGame.startGame();

  return 0;
}