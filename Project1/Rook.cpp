#include "Rook.h"

Rook::Rook(bool debug, Position pos) : Pieces(debug, "Rook", "R")
{
	this->debugMode = debug;
	this->position = pos;
	if (debugMode) {
		cout << "   |__" << pieceName << " in " << position.toString() << " created!" << endl;
	}
}

Rook::~Rook()
{
}
