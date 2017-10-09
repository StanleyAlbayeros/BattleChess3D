#pragma once
#include "Pieces.h"
class Rook :
	public Pieces
{
public:
	bool debugMode;
	string pieceName;

	Rook(bool debug);
	~Rook();
};

