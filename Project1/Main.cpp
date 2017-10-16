#include "Game.h"
#include "Board.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	Board b(true); 
	Game g(true, b);
	cout << "created game and board, and I didn't die!" << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//TODO Move recording should be implemented with an observer pattern. 
	//TODO: Should Move object instances be passed to Game -> Player to record the game's moves?
	//TODO: game.getPlayer(i).move() uses a moveList object inside Player? moveList array for both player's moves inside Game?
	//TODO: should move have a list of startPosition - endPosition \t startPosition - endPosition describing
	//TODO: a turn or just a pair describing a single move?
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	system("PAUSE");
	Sleep(1000);
	return 0;
}