#pragma once
#include "Position.h"

class Pieces
{
public:
	Pieces();
	~Pieces();
	int playerID;
	string pieceName;
	Position validMoves();
	Position getPosition();
	bool hasMoved;
	Position* safeSquares();

private:
	Position position;

};