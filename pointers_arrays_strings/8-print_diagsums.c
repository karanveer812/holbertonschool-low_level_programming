#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints chessboard
 * @a: chessboard
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int d1 = 0;
	int d2 = 0;

	while (x <= (size * size))
	{
		d1 += a[x];
		x = x + (size + 1);
	}

	printf("%d, %d", d1, d2);
}
