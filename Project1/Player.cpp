#include "Player.h"



Player::Player(bool debug, int ID, Board& board)
{
	this->debugMode = debug;
	this->playerID = ID;
	if (debug) {
		cout << "|__Player " << playerID << " created!" << endl;
	}
	gamesWon = 0;

	if ((&board != NULL) && (debugMode)) {
		cout << "Board exists and is in player " << playerID << "'s hands!" << endl;
		cout << board.getPosition(1, 2).toString() << endl;
	}

	if (debugMode) {
		cout << "Creating PieceLists!" << endl;
	}

	this->pieceList = PieceList(debug,board, playerID);

	if (debugMode) {
		cout << "PieceLists created! " ;
		cout << " Player " << playerID << " pieceList: " << pieceList.toString() << endl;
	}




}

int Player::getPlayerID() {
	return playerID;
}

string Player::getListID()
{
	return pieceList.getListID();
}


Player::Player()
{
}
Player::~Player()
{
}
