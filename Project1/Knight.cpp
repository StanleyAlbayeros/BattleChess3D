#include "Knight.h"

Knight::Knight(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "Knight created!" << endl;
	}
}

Knight::~Knight()
{
}
