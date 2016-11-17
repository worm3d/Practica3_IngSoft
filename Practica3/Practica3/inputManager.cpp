#include "stdafx.h"
#include "gameGlobal.h"

void readInput()
{
	if (_kbhit()) {
		char c = _getch();

		if (c == 'a' && characterPos > 0)				characterPos--;
		else if (c == 'd' && characterPos < WORLDSIZE)	characterPos++;
		else if (c == 'q' && !bullet) {
			bulletPos--;
			bulletDir = -1;
			bullet = true;
		}
		else if (c == 'e' && !bullet) {
			bulletPos++;
			bulletDir = 1;
			bullet = true;
		}
	}
}