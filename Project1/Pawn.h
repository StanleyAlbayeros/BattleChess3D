#pragma once
#include "Pieces.h"

class Pawn :
	public Pieces
{
public:
	bool debugMode;
	Pawn(bool debug, Position pos);
	~Pawn();

private:
	string pieceName = "Pawn";
	string pieceID = "P";
};

