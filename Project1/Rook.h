#pragma once
#include "Pieces.h"
class Rook :
	public Pieces
{
public:
	bool debugMode;
	Rook(bool debug);
	~Rook();
};

