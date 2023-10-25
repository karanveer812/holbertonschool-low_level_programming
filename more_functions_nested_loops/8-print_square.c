#include "main.h"

/**
 *  print_squar- prints a square
 *  @size: take number as an input
 */
void print_square(int size)
{
	int x = 0;
	int y;
	while (x < (size))
	{
		y = 0;
		while (y < (size - 1))
		{
			_putchar('#');
			y++;
		}
		x++;
		_putchar('#');
		_putchar('\n');
	}
	if (x <= 0)
	{
		_putchar('\n');
	}
}
