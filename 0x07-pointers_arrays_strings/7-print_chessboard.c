#include "main.h"

/**
 * print_chessboard - Function that prints chessboard
 *@a: Array of size 8
 * Return; 0
 */

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;


	for (x = 0; x < 8; x++)
	{
	for (y = 0; y < 8; y++)
	{
	_putchar (a[x] &&  a[y]);
	}
	_putchar ('\n');
	}
}
