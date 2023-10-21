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
		y = 0;
		while (y < 10)
		{
			calc = ((x*y))
			_putchar((calc / 10) + '0');
			_putchar((calc % 10) + '0');
			y++;
		}
		x++;
		_putchar('\n');
	}
}
