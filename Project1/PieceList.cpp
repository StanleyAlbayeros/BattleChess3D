#include "PieceList.h"



PieceList::PieceList(bool debug, Board& board, int playerNumber)
{
	debugMode = debug;
	if (debug) {
		cout << "|__Creating PieceList " << endl;
	}

	//TODO fill out piece instantiation

	int playerHomeRow = 0 + (playerNumber * 7);
	int playerPawnRow = 1;
	if (playerNumber == 1) {
		playerPawnRow = 6;
	}

	//Position pos(debugMode, 0, 0);
	//pawns
	int i = 0;
	pieces[i] = Rook(debugMode, board.getPosition(playerHomeRow, i));
	pieces[++i] = Knight(debugMode, board.getPosition(playerHomeRow, i));
	pieces[++i] = Bishop(debugMode, board.getPosition(playerHomeRow, i));
	pieces[++i] = Queen(debugMode, board.getPosition(playerHomeRow, i));
	pieces[++i] = King(debugMode, board.getPosition(playerHomeRow, i));
	pieces[++i] = Bishop(debugMode, board.getPosition(playerHomeRow, i));
	pieces[++i] = Knight(debugMode, board.getPosition(playerHomeRow, i));
	pieces[++i] = Rook(debugMode, board.getPosition(playerHomeRow, i));

	for (i=8; i < 16; i++) {
		pieces[i] = Pawn(debugMode, board.getPosition(playerPawnRow, i-8));
	}


	if (debugMode) {
		cout << "|__PieceList created!" << endl;
	}
}

string PieceList::toString() {
	string result = " ( [";
	int i = 0;
	for ( i=0; i < 15; i++) {
		result+=pieces[i].statusToNotation();
		result += "] , [";
	}
	result += pieces[i].statusToNotation();
	result += "]  )";
	return result;
}

PieceList::PieceList()
{
}
PieceList::~PieceList()
{
}
