#include "Queen.h"

Queen::Queen(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "Queen created!" << endl;
	}
}

Queen::~Queen()
{
}
