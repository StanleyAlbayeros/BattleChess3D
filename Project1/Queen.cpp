#include "Queen.h"

Queen::Queen(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << pieceName << " created!" << endl;
	}
}

Queen::~Queen()
{
}
