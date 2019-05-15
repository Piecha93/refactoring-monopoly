#include <iostream>
#include "MonopolyGame.h"


int main() {
  int numOfPlayers;

  std::cout << "Podaj liczbe graczy\n";

//  std::cin >> numOfPlayers;
  numOfPlayers = 4;

  MonopolyGame monopolyGame;

  monopolyGame.addPlayer("Jeden");
  monopolyGame.addPlayer("Dwa");

  monopolyGame.startGame();

  return 0;
}