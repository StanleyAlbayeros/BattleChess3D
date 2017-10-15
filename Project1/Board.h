#pragma once
#include "Player.h"
#include "PieceList.h"
#include "Position.h"
#include <iostream>

using namespace std;

class Board
{
public:
	Board(Player player1, Player player2, bool debug);
	Position Board::getPosition(int row, int column);
	~Board();

private:
	Position checkBoard[8][8];
	bool debugMode;
	PieceList pieceList[2]; // one for each player


};

