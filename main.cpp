#include <iostream>
#include "MonopolyGame.h"


int main()
{
  int numOfPlayers;

  std::cout << "Podaj liczbe graczy\n";

//  std::cin >> numOfPlayers;
  numOfPlayers = 4;

  MonopolyGame monopolyGame(numOfPlayers);

//  monopolyGame.mainLoop();

  return 0;
}