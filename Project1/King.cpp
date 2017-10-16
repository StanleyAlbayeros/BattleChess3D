#include "King.h"

King::King(bool debug, Position pos) : Pieces(debug, "King", "K")
{
	this->debugMode = debug;
	this->position = pos;
	if (debugMode) {
		cout << "   |__" << pieceName << " in " << position.toString() << " created!" << endl;
	}
}

King::~King()
{
}
