#include <iostream>
#include <conio.h>

#include "GameManager.h"

int main()
{
	GameManager gameManger("../levels/Level_1.level");

	gameManger.runGame();

	std::cout << "\nPress ENTER to continue...\n";
	_getch();

	return 0;
}
