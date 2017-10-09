#pragma once

#include <iostream>

using namespace std;


class Player
{
public:
	bool debugMode;
	Player(bool debug, int ID);
	Player();
	~Player();
	int gamesWon;
	bool playerMode; //false IA, true human
	int playerID;
};

