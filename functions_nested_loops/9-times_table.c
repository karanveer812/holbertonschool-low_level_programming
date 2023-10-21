#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int x = 0;
	int y = 0;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			_putchar(((x * y) / 10) + '0');
			_putchar(((x * y) % 10) + '0');
			y++;
		}
		x++;
		_putchar('\n');
	}
}
