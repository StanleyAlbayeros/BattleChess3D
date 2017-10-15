#include "PieceList.h"



PieceList::PieceList(bool debug)
{
	debugMode = debug;
	if (debug) {
		cout << "|__Creating PieceList for player " << "NULL" << endl;
	}

	//TODO fill out piece instantiation
	Position pos(debugMode, 0, 0);
	for (int i = 0; i < 8; i++) {
		pieces[i] = Pawn(debugMode, pos);
	}

	if (debugMode) {
		cout << "|__PieceList for player " << "NULL" << " created!" << endl;
	}
}


PieceList::PieceList()
{
}
PieceList::~PieceList()
{
}
