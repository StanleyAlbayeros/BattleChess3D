#include "Queen.h"

Queen::Queen(bool debug, Position pos) : Pieces(debug, "Queen", "Q")
{
	this->debugMode = debug;
	this->position = pos;
	if (debugMode) {
		cout << "   |__" << pieceName << " in " << position.toString() << " created!" << endl;
	}
}

Queen::~Queen()
{
}
