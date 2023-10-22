#include "main.h"
#include <stdio.h>

/**
 * print_to_98- prints all natural numbers from n to 98
 * @n: takes integers as an input
 */
void print_to_98(int n)
{
	char end;
	while (end != 'y')
	{
		if (n < 98)
                {
                        n++;
                }
                else if (n > 98)
                {
                        n--;
                }
		if (n = 98)
		{
			end = 'y';
		}
		if (n >= 100 || n <= -100)
		{
			int x = (n / 10);
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if (n >= 10 || n <= -10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
}
