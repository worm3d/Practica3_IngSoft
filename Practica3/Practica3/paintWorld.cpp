#include "stdafx.h"
#include "gameGlobal.h"

void paintWorld()
{
	for (int i = 0; i <= WORLDSIZE; i++)
	{
		if (i == characterPos)				printf("^.^");	//Prints the character
		else if (i == bulletPos && bullet)	printf("-");	//Prints the bullet
		else if (i == enemyPos && enemy)	printf("@");	//Prints the enemy
		else if (i == rainPos)				printf("\"");
		else								printf("_");	//Prints the world's floor
	}
	printf("         Lives: %d", lives);
}