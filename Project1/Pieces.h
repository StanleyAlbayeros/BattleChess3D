#pragma once
#include "Position.h"


//TODO  abstract class
class Pieces
{
public:
	Pieces(bool debug);
	Pieces();
	~Pieces();
	virtual Position validMoves();
	virtual Position* safeSquares();
	Position getPosition();

	//not private so the subclasses can access it
protected:
	bool debugMode;
	Position position;

private:
	bool hasMoved;

};