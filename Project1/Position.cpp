#include "Position.h"


Position::Position(bool debug, int row, int column) {
	this->debugMode = debug;
	this->row = row;
	this->column = column;

	if (debugMode) {
		cout << "|__Position row: " << row << " column: " << column << " created!" << endl;
	}
}

Position::Position()
{
}


Position::~Position()
{
}
int Position::getRow()
{
	return row;
}


int Position::getColumn()
{
	return column;
}