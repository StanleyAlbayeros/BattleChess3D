#pragma once
#include "Pieces.h"
class Queen :
	public Pieces
{
public:
	bool debugMode;
	Queen(bool debug);
	~Queen();
};

