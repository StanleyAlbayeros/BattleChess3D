#include "Pieces.h"



Pieces::Pieces(bool debug, Player parent)
{
	this->debugMode = debug;
	this->parent = parent;
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
