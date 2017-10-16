#pragma once
#include "Pieces.h"

class Queen :
	public Pieces
{
public:
	bool debugMode;
	Queen(bool debug, Position pos);
	~Queen();

private:
	string pieceName = "Queen";
	string pieceID = "Q";
};

