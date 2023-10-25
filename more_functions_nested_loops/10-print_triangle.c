#include "main.h"

/**
 *  print_diagonal- draws a diagonal line on the terminal.
 *  @n: take number as an input
 */
void print_triangle(int size)
{
	int x = (size - 1);
	int i = 0;

	if (i <= size)
	{
		while (x > 0)
		{
			while (x < i)
			{
				_putchar(' ');
				x--;
			}
			i++;
			_putchar('#');
			_putchar('\n');
			n++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
