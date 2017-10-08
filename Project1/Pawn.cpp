#include "Pawn.h"


Pawn::Pawn(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "Pawn created!" << endl;
	}
}

Pawn::~Pawn()
{
}
