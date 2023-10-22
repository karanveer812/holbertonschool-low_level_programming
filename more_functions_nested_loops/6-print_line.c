#include "main.h"

/**
 *  print_line- draws a straight line in the terminal.
 *  @n: take number as an input
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
