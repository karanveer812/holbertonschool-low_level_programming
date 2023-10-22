#include "main.h"

/**
 *  print_diagonal- draws a diagonal line on the terminal.
 *  @n: take number as an input
 */
void print_diagonal(int n)
{
	int x;
	int i = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			x = 0;
			while (x <= i)
			{
				_putchar(' ');
				x++;
			}
			i++;
			_putchar('\\');
			n--;
		}
	}
	_putchar('\n');
}
