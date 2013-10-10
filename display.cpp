#include "display.h"

void changeColor(COLORS fgColor, COLORS bgColor)
{	
	#if defined __linux__
		cout << "\033[1;3" << (fgColor) << ";4" << (bgColor) << 'm';
	#elif defined _WIN16 || defined _WIN32 || defined _WIN64
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (fgColor & 0x0f) | ((bgColor & 0x0f) << 4));
	#endif
}

int moveCursor(int x, int y) 
{
	#if defined __linux__
		cout << "\033[" << (x) <<n ';' << (y) << 'H';
	#elif defined _WIN16 || defined _WIN32 || defined _WIN64
		COORD cords = { x, y };
		return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cords);
	#else
		#error moveCursor not available for system.
	#endif
}