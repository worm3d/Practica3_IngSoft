#ifndef _GAMEGLOBAL_H_
#define _GAMEGLOBAL_H_

#define WORLDSIZE 80

extern int characterPos;
extern int lives;

extern int bulletPos;
extern bool bullet;			//Indicates if the bullet is moving
extern int bulletDir;		//Indicates the direction of the bullet, -1 is left, and 1 is right

extern int enemyPos;
extern bool enemy;
extern int enemyOrigin;		//Indicates the origin of the enemy, 0 is no enemy, 1 is left, 2 is right

//extern enum Weather;
extern int rainPos;

#endif // !_GAMEGLOBAL_H_

