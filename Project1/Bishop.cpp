#include "Bishop.h"

Bishop::Bishop(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << pieceName <<  " created!" << endl;
	}
}

Bishop::~Bishop()
{
}
