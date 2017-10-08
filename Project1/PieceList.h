#pragma once
#include "Pieces.h"
#include "Player.h"
class PieceList :
	public Pieces
{
public:
	PieceList(Player parent);
	PieceList();
	~PieceList();
	Pieces pieceList[16];
};