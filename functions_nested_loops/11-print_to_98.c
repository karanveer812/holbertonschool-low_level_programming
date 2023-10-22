#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints all natural numbers from n to 98
 * @n: takes integers as an input
 */
void print_to_98(int n)
{
	char end;

	while (end != 'y')
	{
		if (n == 98)
		{
			end = 'y';
		}
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		if (n < 98)
		{
			n++;
		}
		else if (n > 98)
		{
			n--;
		}
	}
	printf("\n");
}
