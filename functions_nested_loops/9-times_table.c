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
		while (y < 10)
		{
			_putchar(x + '0');
			_putchar(y + '0');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
