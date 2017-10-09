#include "Rook.h"

Rook::Rook(bool debug, Player parent)
{
	this->parent = parent;
	this->debugMode = debug;
	if (debugMode) {
		cout << pieceName << " created!" << endl;
	}
}

Rook::~Rook()
{
}
