#include "Board.h"


Board::Board(Player player1, Player player2, bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "Board created!" << endl;
	}
}


Board::~Board()
{
}
