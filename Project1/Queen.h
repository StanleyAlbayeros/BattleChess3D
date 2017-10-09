#pragma once
#include "Pieces.h"
class Queen :
	public Pieces
{
public:
	bool debugMode;
	string pieceName = "Queen";

	Queen(bool debug, Player parent);
	~Queen();
};

