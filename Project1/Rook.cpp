#include "Rook.h"

Rook::Rook(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "Rook created!" << endl;
	}
}

Rook::~Rook()
{
}
