#include "King.h"

King::King(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << pieceName << " created!" << endl;
	}
}

King::~King()
{
}
