#include "stdafx.h"
#include "gameGlobal.h"

void updateBullet()
{
	if (!bullet) bulletPos = characterPos; //If a bullet is not moving, its position must be equal to the character position
	else if (bullet) {
		if (bulletDir == -1)	bulletPos--;
		else bulletPos++;
	}
}

void updateEnemy()
{
	if (!enemy) {
		enemyOrigin = rand() % 3; //Creates a random to determine the initial position of the enemy.
		if (enemyOrigin == 1) {
			enemyPos = 0;
			enemy = true;
		}
		else if (enemyOrigin == 2) {
			enemyPos = WORLDSIZE;
			enemy = true;
		}
	}
	else {
		if (enemyOrigin == 1) enemyPos++;
		else if (enemyOrigin == 2) enemyPos--;
	}
}

void updateCollisions()
{
	//Checks collisions with the world
	if (bulletPos <= 0 || bulletPos >= WORLDSIZE) {
		bullet = false;
		bulletPos = characterPos;
	}

	//Checks collisions of the bullets with the enemies
	if (enemyOrigin == 1 && enemyPos >= bulletPos) {
		enemy = false;
		bullet = false;
	}
	else if (enemyOrigin == 2 && enemyPos <= bulletPos) {
		enemy = false;
		bullet = false;
	}

	//Checks collisions of the character with the enemies
	if (enemyOrigin == 1 && enemyPos >= characterPos) {
		enemy = false;
		lives--;
	}
	if (enemyOrigin == 2 && enemyPos <= characterPos) {
		enemy = false;
		lives--;
	}
}

void updateWeather(/*Weather currentWeather*/) {

	rainPos = rand() % (WORLDSIZE + 1);

}