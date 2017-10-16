#pragma once
#include <iostream>
#include <string>

using namespace std;

class Position
{
public:
	Position(bool debug, int row, int column);
	Position();
	~Position();
	int getRow();
	int getColumn();
	string Position::toString();

private:
	bool debugMode;
	int row;
	int column;
	string columnLetter;
};

