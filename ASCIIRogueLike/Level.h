#ifndef LEVEL_H
#define LEVEL_H


/* INCLUDES */
#include <vector>
#include <string>
#include "Player.h"
#include "Enemy.h"


/* CLASS DECLARATION */
class Level
{
private:
	int _levelCounter = 1;
	std::vector<std::string> _levelData;
	std::vector<Enemy> _enemies;
	std::vector<std::string> _levelPath;
	void movePlayerLogic(Player &player, int moveX, int moveY);
	void moveEnemyLogic(Player &player, int enemyIndex, int moveX, int moveY);
	void battleEnemy(Player &player, int targetX, int targetY);

public:
	void loadLevel(std::string fileName, Player &player);
	void displayLevel();
	void movePlayer(char move, Player &player);
	void updateEnemyPosition(Player &player);
	char getUnitTile(int x, int y);
	void setUnitTile(int x, int y, char unitTile);
	void saveProgress(int levelNum, int x, int y);
	void clearLevel();
};


#endif // LEVEL_H
