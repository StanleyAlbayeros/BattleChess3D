#include "Board.h"


Board::Board(Player player1, Player player2, bool debug)
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

	if (debugMode) {
		cout << "Creating PieceLists!" << endl;
	}

	this->pieceList[0] = PieceList(player1, debug);
	this->pieceList[1] = PieceList(player2, debug);

	if (debugMode) {
		cout << "PieceLists created!" << endl;
	}
}


Board::~Board()
{
}
