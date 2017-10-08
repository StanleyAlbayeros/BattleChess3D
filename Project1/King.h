#include "Pieces.h"
#pragma once
class King :
	public Pieces
{
public:
	bool debugMode;
	King(bool debug);
	~King();
};

