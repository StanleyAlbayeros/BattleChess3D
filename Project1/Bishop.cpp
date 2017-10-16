#include "Bishop.h"

Bishop::Bishop(bool debug, Position pos) : Pieces(debug, "Bishop", "B")
{
	this->debugMode = debug;
	this->position = pos;
	if (debugMode) {
		cout << "   |__" << pieceName << " in " << position.toString() << " created!" << endl;
	}
}

Bishop::~Bishop()
{
}
