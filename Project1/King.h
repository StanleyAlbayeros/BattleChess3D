#include "Pieces.h"
#pragma once
class King :
	public Pieces
{
public:
	bool debugMode;
	string pieceName;
	King(bool debug);
	~King();
};

