#pragma once
#include "Pieces.h"

class King :
	public Pieces
{
public:
	bool debugMode;
	King(bool debug, Position pos);
	~King();

private:
	string pieceName = "King";
	string pieceID = "K";
};

