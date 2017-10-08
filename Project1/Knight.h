#include "Pieces.h"
#pragma once
class Knight :
	public Pieces
{
public:
	bool debugMode;
	Knight(bool debug);
	~Knight();
};

