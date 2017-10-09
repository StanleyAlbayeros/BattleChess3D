#include "Player.h"



Player::Player(bool debug, int ID)
{
	this->debugMode = debug;
	this->playerID = ID;
	if (debug) {
		cout << "|__Player " << playerID << " created!" << endl;
	}
	gamesWon = 0;
}

int Player::getPlayerID() {
	return playerID;
}


Player::Player()
{
}
Player::~Player()
{
}
