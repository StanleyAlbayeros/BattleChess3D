#include "Game.h"
#include "Board.h"
#include <iostream>
#include <Windows.h>


int main() {
	Game g(true);
	Board b(g.getPlayer(0), g.getPlayer(1), true); 
	using namespace std;
	cout << "created game and board, and I didn't die!" << endl;
	system("PAUSE");
	Sleep(1000);
	return 0;
}