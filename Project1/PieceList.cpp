#include "PieceList.h"



PieceList::PieceList(Player parent, bool debug)
{
	debugMode = debug;
	if (debug) {
		cout << "PieceList for player " << parent.playerID << " created!" << endl;
	}
}


PieceList::PieceList()
{
}
PieceList::~PieceList()
{
}
