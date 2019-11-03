#include <iostream>
#include <conio.h>

#include "GameManager.h"

int main()
{
	GameManager gameManger("../levels/Level_test.level");

	gameManger.runGame();

	std::cout << "\nPress ENTER to continue...\n";
	_getch();

	return 0;
}
