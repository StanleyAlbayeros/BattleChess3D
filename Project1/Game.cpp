#include "Game.h"


Game::Game(bool debug)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "Game created!" << endl;
	}
}


Game::~Game()
{
}
