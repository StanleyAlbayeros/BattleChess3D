#include "Game.h"


Game::Game(bool debug, Board board)
{
	this->debugMode = debug;
	if (debugMode) {
		cout << "Creating Game!" << endl;
	}

	for (int i = 0; i < 2; i++) {
		this->players[i] = Player(debug, i, board);
	}
	if (debugMode) {
		cout << "Game created!" << endl;
	}
	boardStateToConsole();

}


Game::~Game()
{
}

Player Game::getPlayer(int playerNumber)
{
	string playerNumberExcep = "";
	if ((playerNumber >= 0) && (playerNumber <= 1)) {
		return players[playerNumber];
	}
	else {
		playerNumberExcep = "You tried to call getPlayer with playerNumber " + to_string(playerNumber) + " !";
		throw playerNumberExcep;
	}
}

void Game::boardStateToConsole() {

	cout << "________________" << endl;
	cout << players[0].getListID();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << players[1].getListID();
	cout << "________________" << endl;
}
