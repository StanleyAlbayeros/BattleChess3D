#pragma once
#include "Pieces.h"
class Pawn :
	public Pieces
{
public:
	bool debugMode;
	string pieceName = "Pawn";

	Pawn(bool debug, Player parent, Position pos);
	~Pawn();
};

