#pragma once
#include "Pieces.h"

class Knight :
	public Pieces
{
public:
	bool debugMode;
	Knight(bool debug, Position pos);
	~Knight();

private:
	string pieceName = "Knight";
	string pieceID = "N";
};

