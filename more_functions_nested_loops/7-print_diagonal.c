#include "main.h"

/**
 *  print_diagonal- draws a diagonal line on the terminal.
 *  @n: take number as an input
 */
void print_diagonal(int n)
{
	int x = 0;
	int i = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			while (x <= i)
			{
				_putchar(' ');
			}
			i++;
			_putchar('\\');
			n--;
		}
	}
	_putchar('\n');
}
