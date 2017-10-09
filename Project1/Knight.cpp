#include "Knight.h"

Knight::Knight(bool debug, Player parent)
{
	this->parent = parent;
	this->debugMode = debug;
	if (debugMode) {
		cout << pieceName << " created!" << endl;
	}
}

Knight::~Knight()
{
}
