#include "Knight.h"

Knight::Knight(bool debug, Position pos) : Pieces(debug, "Knight", "N")
{
	this->debugMode = debug;
	this->position = pos;
	if (debugMode) {
		cout << "   |__" << pieceName << " in " << position.toString() << " created!" << endl;
	}
}

Knight::~Knight()
{
}
