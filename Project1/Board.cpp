#include "Board.h"


Board::Board(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "Board created!" << endl;
	}
}


Board::~Board()
{
}
