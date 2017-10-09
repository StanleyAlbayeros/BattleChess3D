#pragma once

#include <iostream>

using namespace std;


class Player
{
public:
	Player(bool debug, int ID);
	Player();
	~Player();
	int Player::getPlayerID();

private:

	bool debugMode;
	int gamesWon;
	bool playerMode; //false IA, true human
	int playerID;
};

