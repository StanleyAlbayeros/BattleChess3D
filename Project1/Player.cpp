#include "Player.h"



Player::Player(bool debug, int ID)
{
	this->debugMode = debug;
	this->playerID = ID;
	cout << "Player " << playerID << " created!" << endl;
	gamesWon = 0;
}


Player::Player()
{
}
Player::~Player()
{
}
