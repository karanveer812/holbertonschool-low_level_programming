#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints all natural numbers from n to 98
 * @n: takes integers as an input
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n >= 100)
		{
			int x = (n / 10);
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
		if (n < 98)
		{
			n++;
		}
		else if (n > 98)
		{
			n--;
		}
	}
}
