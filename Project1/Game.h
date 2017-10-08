#pragma once
#include "Move.h"
#include "Player.h"
#include "Pieces.h"
#include "Position.h"
#include <iostream>

using namespace std;

class Game
{
public:
	Game(bool debug);
	~Game();
	bool debugMode;
	Move* moveList;
	int currentPlayer;
	int turnCounter = 0;
	Player players[2];
	bool gameStatus = false; //False: in progress, True: completed
	int playerCheckedStatus[2]; //Posiciones 0= player 1, 1= player 2. Valores 0=no, 1= yes

	void startGame();

	void addMovetoGame(Player player, Pieces piece, 
		Position startPosition, Position endPosition);

	bool isPlayerChecked(Player player);


	bool isPlayerCheckmated(Player player);
	   
};

