#include "Bishop.h"

Bishop::Bishop(bool debug, Player parent)
{
	this->parent = parent;
	this->debugMode = debug;
	if (debugMode) {
		cout << pieceName <<  " created!" << endl;
	}
}

Bishop::~Bishop()
{
}
