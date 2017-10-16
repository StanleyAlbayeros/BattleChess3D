#pragma once
#include "Position.h"



//TODO  abstract class
class Pieces
{
public:
	Pieces(bool debug);
	Pieces(bool debug, string name, string id);
	Pieces(bool debug, Position pos, string name, string id);
	//makePiece();
	Pieces();
	~Pieces();
	virtual Position validMoves();
	virtual Position* safeSquares();
	string statusToNotation();
	Position getPosition();
	string getName();

	//not private so the subclasses can access it
protected:
	bool debugMode;
	Position position;
	string pieceName  = "BASE";
	string pieceID = "BASE" ;

private:
	bool hasMoved;

};