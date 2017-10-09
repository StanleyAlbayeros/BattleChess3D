#include "Queen.h"

Queen::Queen(bool debug, Player parent)
{
	this->parent = parent;
	this->debugMode = debug;
	if (debugMode) {
		cout << pieceName << " created!" << endl;
	}
}

Queen::~Queen()
{
}
