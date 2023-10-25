#include "main.h"

/**
 *  print_diagonal- draws a diagonal line on the terminal.
 *  @n: take number as an input
 */
void print_triangle(int size)
{
	int x, y, i;
	x = 0;
	y = 0;
	i = size;

	while (y <= size)
	{
		while (i <= 0)
		{
			_putchar(' ');
			i--;
		}
		while (x <= size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
