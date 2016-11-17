#include "stdafx.h"
#include "gameGlobal.h"
#include "inputManager.h"
#include "objectsManager.h"
#include "paintWorld.h"

#define GAMEWAIT (1000/20)

bool gameOver = false;

int characterPos = 40;
int lives = 3;

int bulletPos = 40;
bool bullet = false;	//Indicates if the bullet is moving
int bulletDir = -1;		//Indicates the direction of the bullet, -1 is left, and 1 is right

int enemyPos = 0;
bool enemy = false;
int enemyOrigin = -1; //Indicates the origin of the enemy, 0 is no enemy, 1 is left, 2 is right

int rainPos = 0;

int main()
{
	printf("\n\n\n\n\n\n\n"); //Move the cursor a bit down from initial position

	while (!gameOver)
	{
		updateBullet();
		updateEnemy();
		updateCollisions();
		updateWeather();

		paintWorld();
		printf("\r"); //Returns the cursor to the beginning of the line

		readInput();

		if (lives == 0) gameOver = true;

		Sleep(GAMEWAIT);
	}

	printf("\r");
	printf("\t\t\t\t\t\t\tGAME OVER\t\t\t\t\t\t\t");
	Sleep(3000);

	return 0;
}