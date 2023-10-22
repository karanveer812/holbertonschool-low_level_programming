#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints all natural numbers from n to 98
 * @n: takes integers as an input
 */
void print_to_98(int n)
{
	int x;

	while (n != 98)
	{
		if (_abs(n) >= 100)
		{
			x = (n / 10);
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if (_abs(n) > 10)
		{
			int x = (n / 10);
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
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
