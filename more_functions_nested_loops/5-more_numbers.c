#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i = 0;
	int y;

	while (i <= 9)
	{
		y = 0;
		while (y <= 14)
		{
			if (y > 10)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}
