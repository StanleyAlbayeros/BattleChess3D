#include "Board.h"


Board::Board(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "Creating Board!" << endl;
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			this->checkBoard[i][j] = Position(debug, i, j);
		}
	}

	if (debugMode) {
		cout << "Board created!" << endl;
	}
}

Position Board::getPosition(int row, int column)
{
	return checkBoard[row][column];
}


Board::~Board()
{
}
