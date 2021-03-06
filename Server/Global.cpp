#include "Global.h"

Tile toTile(char ch) {
	switch (ch)
	{
	case ' ':
		return Tile::Unused;
	case '#':
		return Tile::DirtWall;
	case '_':
		return Tile::DirtFloor;
	case '.':
		return Tile::Corridor;
	case '+':
		return Tile::Door;
	case '<':
		return Tile::UpStairs;
	case '>':
		return Tile::DownStairs;
	default:
		break;
	}
	return Tile::Unused;
}

char toChar(Tile tile) {
	switch (tile)
	{
	case Tile::Unused:
		return ' ';
	case Tile::DirtWall:
		return '#';
	case Tile::DirtFloor:
		return '_';
	case Tile::Corridor:
		return '.';
	case Tile::Door:
		return '+';
	case Tile::UpStairs:
		return '<';
	case Tile::DownStairs:
		return '>';
	default:
		break;
	}
	return ' ';
}

#ifdef _WIN32 
BOOL SetConsoleColor(WORD wAttributes) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hConsole == INVALID_HANDLE_VALUE)
		return FALSE;
	return SetConsoleTextAttribute(hConsole, wAttributes);
}
#endif
