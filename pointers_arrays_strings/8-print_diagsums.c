#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix.
 * @a: Numbered square
 * @size: size of the square
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = (size - 1);
	int d1 = 0;
	int d2 = 0;

	while (x <= (size * size))
	{
		d1 += a[x];
		x = x + (size + 1);
	}
	while (y <= ((size * size) - (size - 1)))
	{
		d2 += a[y];
		y = y + (size - 1);
	}

	printf("%d, %d\n", d1, d2);
}
