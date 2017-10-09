#include "Pieces.h"
#pragma once
class Knight :
	public Pieces
{
public:
	bool debugMode;
	string pieceName = "Knight";

	Knight(bool debug, Player parent);
	~Knight();
};

