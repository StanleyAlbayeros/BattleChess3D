#include "Pieces.h"
#pragma once
class Bishop : 
	public Pieces
{
public:
	bool debugMode;
	string pieceName = "Bishop";

	Bishop(bool debug, Player parent);
	~Bishop();
};

