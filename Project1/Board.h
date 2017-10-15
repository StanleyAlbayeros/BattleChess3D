#pragma once
#include "Position.h"
#include <iostream>

using namespace std;

class Board
{
public:
	Board(bool debug);
	Position Board::getPosition(int row, int column);
	~Board();

private:
	Position checkBoard[8][8];
	bool debugMode;


};

