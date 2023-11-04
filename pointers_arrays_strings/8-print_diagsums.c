#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: Numbered square
 * @size: size of the square
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size;
	int d1 = 0;
	int d2 = 0;

	while (x <= (size * size))
	{
		d1 += a[x];
		d2 += a[y];
		x = x + (size + 1);
		y = y + (size - 1);
	}

	printf("%d, %d", d1, d2);
}
