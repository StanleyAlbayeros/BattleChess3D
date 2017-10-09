#include "Pawn.h"


Pawn::Pawn(bool debug, Player parent, Position pos)
{
	this->parent = parent;
	this->debugMode = debug;
	this->position = pos;
	if (debugMode) {
		cout << "\\___"<<  pieceName << " for player " << parent.getPlayerID() << " in (" << position.getRow() << "," << position.getColumn() << ") created!" << endl;
	}
}

Pawn::~Pawn()
{
}
