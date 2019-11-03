#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H


/* INCLUDES */
#include <string>
#include <vector>
#include "Player.h"
#include "Level.h"


/* CLASS DECLARATIONS */
enum class GameStates
{
	MAIN_MENU, RESUME, SAVE, LOAD, HELP, EXIT
};


class GameManager
{

private:
	Player _player;
	Level _level;
	std::vector<std::string> _mainMenu = { "***Main Menu***", "New Game", "Load Game", "Instructions", "Help", "Exit" };

public:
	GameManager(std::string levelFileName);
	void runGame();
	void playerInput();
	void mainMenu();
};


#endif // GAME_MANAGER_H
