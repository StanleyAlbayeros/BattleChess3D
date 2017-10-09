#pragma once
#include "Pieces.h"
class Queen :
	public Pieces
{
public:
	bool debugMode;
	string pieceName;

	Queen(bool debug);
	~Queen();
};

