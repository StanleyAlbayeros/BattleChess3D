#include "Pieces.h"
#pragma once
class King :
	public Pieces
{
public:
	bool debugMode;
	string pieceName = "King";

	King(bool debug, Player parent);
	~King();
};

