#include "main.h"

/**
 *  print_triangle- Print triangle.
 *  @size: take number as an input
 */
void print_triangle(int size)
{
	int x, y, i;

	y = 0;

	while (y < size)
	{
		i = (size - y) - 2;
		x = 0;
		while (i >= 0)
		{
			_putchar(' ');
			i--;
		}
		while (x <= y)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
