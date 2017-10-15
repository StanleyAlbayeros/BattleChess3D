#include "Game.h"
#include "Board.h"
#include <iostream>
#include <Windows.h>


int main() {
	Board b(true); 
	Game g(true);
	using namespace std;
	cout << "created game and board, and I didn't die!" << endl;
	system("PAUSE");
	Sleep(1000);
	return 0;
}