#pragma once
#include "Position.h"
#include "Player.h"


//TODO  abstract class
class Pieces
{
public:
	Pieces(bool debug, Player parent);
	Pieces();
	~Pieces();
	virtual Position validMoves();
	virtual Position* safeSquares();
	Position getPosition();

	//not private so the subclasses can access it
protected:
	Player parent;
	bool debugMode;
	Position position;

private:
	bool hasMoved;

};