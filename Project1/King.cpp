#include "King.h"

King::King(bool debug, Player parent)
{
	this->parent = parent;
	this->debugMode = debug;
	if (debugMode) {
		cout << pieceName << " created!" << endl;
	}
}

King::~King()
{
}
