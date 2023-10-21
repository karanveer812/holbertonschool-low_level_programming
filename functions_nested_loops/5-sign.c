#include "main.h"

/**
 * _print_sign - check if the input is a positive or negative integer
 * @n: Takes number as input
 *
 * Return: 1 if +, -1 if -, 0 if 0
 */
int print_sign(int n)
{
	if (n > 0) 
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
        {
                _putchar('-');
                return ("-1");
        }
	else
        {
                _putchar('0');
                return (0);
        }
}
