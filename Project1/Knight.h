#include "Pieces.h"
#pragma once
class Knight :
	public Pieces
{
public:
	bool debugMode;
	string pieceName;
	Knight(bool debug);
	~Knight();
};

