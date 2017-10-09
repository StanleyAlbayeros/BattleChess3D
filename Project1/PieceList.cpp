#include "PieceList.h"



PieceList::PieceList(Player parent, bool debug)
{
	debugMode = debug;
	if (debug) {
		cout << "|__Creating PieceList for player " << parent.getPlayerID() << endl;
	}

	//TODO fill out piece instantiation
	Position pos(debug, 0, 0);
	for (int i = 0; i < 8; i++) {
		pieces[i] = Pawn(debug, parent, pos);
	}

	if (debug) {
		cout << "|__PieceList for player " << parent.getPlayerID() << " created!" << endl;
	}
}


PieceList::PieceList()
{
}
PieceList::~PieceList()
{
}
