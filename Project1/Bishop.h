#pragma once
#include "Pieces.h"

class Bishop : 
	public Pieces
{
public:
	bool debugMode;
	Bishop(bool debug, Position pos);
	~Bishop();

private:
	string pieceName = "Bishop";
	string pieceID = "B";
};

