#include "main.h"

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
			_putchar((x * y) + '0');
			y++;
		}
		_putchar('\n');
		x++;
	}
}
