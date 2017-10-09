#pragma once
#include "Player.h"
#include "PieceList.h"
#include "Position.h"
#include <iostream>

using namespace std;

class Board
{
public:
	Position checkBoard[8][8];
	bool debugMode;
	Board(Player player1, Player player2, bool debug);
	~Board();
	PieceList pieceList[2]; // one for each player

};

