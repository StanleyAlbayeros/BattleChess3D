#include "Pieces.h"



Pieces::Pieces(bool debug)
{
	this->debugMode = debug;
}

Pieces::Pieces(bool debug, string name, string id)
{
	this->debugMode = debug;
	this->pieceName = name;
	this->pieceID = id;
}

Pieces::Pieces(bool debug, Position pos, string name, string id)
{
	this->debugMode = debug;
	this->pieceName = name;
	this->pieceID = id;
	this->position = pos;
	if (debugMode) {
		cout << "   |__" << pieceName << " in " << position.toString() << " created!" << endl;
	}

}

Pieces::Pieces()
{
}


Pieces::~Pieces()
{
}

string Pieces::statusToNotation() {
	string a = this->pieceID;
	a += getPosition().toString();
	return a;


}

Position Pieces::validMoves()
{
	return Position();
}


Position Pieces::getPosition()
{
	return this->position;
}

string Pieces::getName() {
	string a = this->pieceName;
	return a;
}

string Pieces::getID()
{
	return pieceID;
}

Position* Pieces::safeSquares()
{
	return nullptr;
}
