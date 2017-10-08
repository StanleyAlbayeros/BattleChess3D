#pragma once
#include "Pieces.h"
class Pawn :
	public Pieces
{
public:
	bool debugMode;
	Pawn(bool debug);
	~Pawn();
};

