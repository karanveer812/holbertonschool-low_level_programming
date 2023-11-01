#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse a given array
 * @a: Take array as an input
 * @n: Number of elemaents in the arrray
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;
	int i = 0;

	while (x <= y)
	{
		i = a[x];
		a[x] = a[y];
		a[y] = i;
		y--;
		x++;
	}
}
