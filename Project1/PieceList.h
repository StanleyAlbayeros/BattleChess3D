#pragma once
#include "Pieces.h"
#include "Pawn.h"
#include "Position.h"
class PieceList
{
public:
	bool debugMode;

	PieceList(bool debug);
	PieceList();
	~PieceList();
	Pieces pieces[16];
};