#ifndef ENEMY_H
#define ENEMY_H


/* INCLUDES */
#include <string>


/* CLASS DECLARATION */
class Enemy
{
private:
	std::string _name;
	char _unitTile;

	//Enemy Status
	int _health;
	int _attack;
	int _xp;
	int _defence;
	int _level;

	//Enemy Location
	int _x;
	int _y;

public:
	Enemy(std::string name, char unitTile, int health, int attack, int defence, int xp, int level);
	void getPosition(int &x, int &y);
	void setPosition(int x, int y);
	int attackChance();
	int takeDamage(int attackChance); //return 0 if not dead else return xp
	std::string getEnemyName();
	int getEnemyHealth();
	char getMove( int playerX, int playerY);
	char getChar();
};


#endif // ENEMY_H
