#pragma once
#include "Pieces.h"
class Rook :
	public Pieces
{
public:
	bool debugMode;
	string pieceName = "Rook";

	Rook(bool debug, Player parent);
	~Rook();
};

