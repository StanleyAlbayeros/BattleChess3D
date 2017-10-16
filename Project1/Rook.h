#pragma once
#include "Pieces.h"

class Rook :
	public Pieces
{
public:
	bool debugMode;
	Rook(bool debug, Position pos);
	~Rook();

private:
	string pieceName = "Rook";
	string pieceID = "R";
};

