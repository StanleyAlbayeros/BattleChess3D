#pragma once
#include "Pieces.h"
#include "Player.h"
class PieceList
{
public:
	bool debugMode;

	PieceList(Player parent, bool debug);
	PieceList();
	~PieceList();
	Pieces pieceList[16];
};