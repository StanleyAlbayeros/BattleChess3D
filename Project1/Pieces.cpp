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

Position* Pieces::safeSquares()
{
	return nullptr;
}
