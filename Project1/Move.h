#pragma once
#include "Position.h"
#include "Pieces.h"
#include "Player.h"
class Move
{
public:
	Move();
	~Move();
	Position startPosition;
	Position endPosition;
	Pieces piece;
	Pieces capturedPiece;
	Player player;
	int getMove();
};

