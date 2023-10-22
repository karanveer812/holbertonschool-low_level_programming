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

	do
	{
		y = 0;
		while (y < 10)
		{
			calc = ((x*y));
			_putchar((calc / 10) + '0');
			_putchar((calc % 10) + '0');
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		printf("\n");
		x++;
	}
	while (x < 10);
}
