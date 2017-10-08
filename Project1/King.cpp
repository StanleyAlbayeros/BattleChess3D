#include "King.h"

King::King(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "King created!" << endl;
	}
}

King::~King()
{
}
