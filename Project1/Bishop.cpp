#include "Bishop.h"

Bishop::Bishop(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "Bishop created!" << endl;
	}
}

Bishop::~Bishop()
{
}
