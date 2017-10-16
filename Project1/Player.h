#pragma once

#include <iostream>
#include "PieceList.h"
#include "Board.h"

using namespace std;


class Player
{
public:
	Player(bool debug, int ID, Board& board);
	Player();
	~Player();
	int Player::getPlayerID();

private:

	bool debugMode;
	int gamesWon;
	bool playerMode; //false IA, true human
	int playerID;
	PieceList pieceList;
};

