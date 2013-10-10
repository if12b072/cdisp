#ifndef _DISPLAY_
	#define _DISPLAY_
#endif

#include <iostream>

#if defined _WIN16 || defined _WIN32 || defined _WIN64
	#include <windows.h>
#endif

using namespace std;


typedef enum
{
	BLACK,              // 0000
	BLUE,               // 0001
	GREEN,              // 0010
	CYAN,               // 0011
	RED,                // 0100
	MAGENTA,            // 0101
	BROWN,              // 0110
	LIGHTGRAY,          // 0111
	DARKGRAY,           // 1000
	LIGHTBLUE,          // 1001
	LIGHTGREEN,         // 1010
	LIGHTCYAN,          // 1011
	LIGHTRED,           // 1100
	LIGHTMAGENTA,       // 1101
	YELLOW,             // 1110
	WHITE               // 1111

} COLORS;

void changeColor(COLORS, COLORS);
int  moveCursor(int, int);