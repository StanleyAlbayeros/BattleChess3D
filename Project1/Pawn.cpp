#include "Pawn.h"


Pawn::Pawn(bool debug, Player parent, Position pos)
{
	this->parent = parent;
	this->debugMode = debug;
	this->position = pos;
	if (debugMode) {
		cout << "   |__"<<  pieceName << " for player " << parent.getPlayerID() << " in (" << position.getRow() << "," << position.getColumn() << ") created!" << endl;
	}
}

Pawn::~Pawn()
{
}
