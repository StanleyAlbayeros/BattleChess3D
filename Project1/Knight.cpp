#include "Knight.h"

Knight::Knight(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << pieceName << " created!" << endl;
	}
}

Knight::~Knight()
{
}
