#include "Position.h"


Position::Position(bool debug, int row, int column) {
	this->debugMode = debug;
	this->row = row;
	this->column = column;
	this->columnLetter ='a' + column;

	if (debugMode) {
		cout << "|__Position row: " << row << " column: " << columnLetter << " created!" << endl;
	}
}

Position::Position()
{
}

string Position::toString() {
	//TODO
	//cout << "|__Position row: " << row << " column: " << column << " created!" << endl;
	string a = columnLetter + to_string(row+1);
	return a;
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