#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int x = 0;
	int y;
	int calc;

	while (x < 10)
	{
		_putchar('\n');
		y = 0;
		while (y < 10)
		{
			calc = ((x*y));
			printf("%d", calc);
			y++;
		}
		x++;
	}
}
