#include "Pawn.h"


Pawn::Pawn(bool debug, Position pos)
{
	this->debugMode = debug;
	this->position = pos;
	if (debugMode) {
		cout << "   |__"<<  pieceName << " in (" << position.getRow() << "," << position.getColumn() << ") created!" << endl;
	}
}

Pawn::~Pawn()
{
}
