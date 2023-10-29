#include "main.h"
#include <stdio.h>

/**
 * print_array - n number of integers from an array
 * @a: takes int as input
 * @n: takes int as input
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		printf("%d, ", a[i]);
		i++;
	}
	_putchar('\n');
}
