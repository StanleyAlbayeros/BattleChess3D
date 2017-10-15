#include "Pieces.h"



Pieces::Pieces(bool debug)
{
	this->debugMode = debug;
}

Pieces::Pieces()
{
}


Pieces::~Pieces()
{
}


Position Pieces::validMoves()
{
	return Position();
}


Position Pieces::getPosition()
{
	return this->position;
}


Position* Pieces::safeSquares()
{
	return nullptr;
}
