#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 * @a: chessboard
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int d1 = 0;
	int d2 = 0;

	while (y < size)
	{
		while (x < size)
		{
			d1 += a[x][x];
			d2 += a[x][size - x];
			x++;
		}
	}

	printf("%d", "%d", d1, d2);
}
