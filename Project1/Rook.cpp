#include "Rook.h"

Rook::Rook(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << pieceName << " created!" << endl;
	}
}

Rook::~Rook()
{
}
