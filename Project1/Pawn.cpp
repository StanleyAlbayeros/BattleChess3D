#include "Pawn.h"

Pawn::Pawn(bool debug, Position pos) : Pieces(debug, "Pawn", "P")
{
	this->debugMode = debug;
	this->position = pos;
	if (debugMode) {
		cout << "   |__"<<  pieceName << " in " << position.toString() << " created!" << endl;
	}
}

Pawn::~Pawn()
{
}
