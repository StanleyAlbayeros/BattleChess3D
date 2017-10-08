#include "Pieces.h"



Pieces::Pieces()
{
	Position position;
	playerID = 0;
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
