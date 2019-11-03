#include "GameManager.h"


/* INCLUDES */
#include <conio.h>


/* MEMBER FUNCTIONS */
GameManager::GameManager(std::string levelFileName)
{
	_player.init(100, 10, 10, 0, 1);
	_level.loadLevel(levelFileName, _player);
}

void GameManager::runGame()
{
	bool gameOver = false;

	while (!gameOver)
	{
		_level.displayLevel();
		playerInput();
		_level.updateEnemyPosition(_player);
	}
}

void GameManager::playerInput()
{
	char input;
	printf("\nConsole.. (w/a/s/d)>> ");
	input = _getch();
	_level.movePlayer(input, _player);
}

void GameManager::mainMenu()
{
	for (size_t i = 0; i < _mainMenu.size(); i++)
	{
		printf("%s\n", _mainMenu[i].c_str());
	}

	system("PAUSE>null");
}
