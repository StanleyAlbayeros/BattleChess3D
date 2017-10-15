#include "PieceList.h"



PieceList::PieceList(Player parent, bool debug)
{
	debugMode = debug;
	if (debug) {
		cout << "|__Creating PieceList for player " << parent.getPlayerID() << endl;
	}

	//TODO fill out piece instantiation
	Position pos(debugMode, 0, 0);
	for (int i = 0; i < 8; i++) {
		pieces[i] = Pawn(debugMode, parent, pos);
	}

	if (debugMode) {
		cout << "|__PieceList for player " << parent.getPlayerID() << " created!" << endl;
	}
}


PieceList::PieceList()
{
}
PieceList::~PieceList()
{
}
