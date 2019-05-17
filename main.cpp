#include <iostream>
#include "MonopolyGame.h"
#include "ComputerPlayer.h"

int main() {
  MonopolyGame monopolyGame;

  monopolyGame.addHumanPlayer("Człowiek jeden");
//  monopolyGame.addHumanPlayer("Człowiek dwa");
  monopolyGame.addComputerPlayer("Kąputer jeden", ComputerPlayerMode::Greedy);
  monopolyGame.addComputerPlayer("Kąputer dwa", ComputerPlayerMode::Random);

  monopolyGame.startGame();

  return 0;
}