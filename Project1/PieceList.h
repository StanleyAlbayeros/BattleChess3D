#pragma once
#include "Pieces.h"
#include "Position.h"
#include "Board.h"

#include "Bishop.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Queen.h"
#include "Rook.h"


class PieceList
{
public:
	bool debugMode;

	PieceList(bool debug, Board& board, int playerNumber);
	string PieceList::toString();
	PieceList();
	~PieceList();
	Pieces pieces[16];
};