#pragma once
#include "Pieces.h"
#include "Pawn.h"
#include "Player.h"
#include "Position.h"
class PieceList
{
public:
	bool debugMode;

	PieceList(Player parent, bool debug);
	PieceList();
	~PieceList();
	Pieces pieces[16];
};