#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 * @a: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
