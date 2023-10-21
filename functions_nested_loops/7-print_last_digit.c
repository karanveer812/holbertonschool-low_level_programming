#include "main.h"

/**
 * print_last_digit - prints last digit the number
 * @n: Takes number as input
 *
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	int last_dig = ((n % 10));

	if (last_dig < 0)
	{
		last_dig = ((last_dig * -1));
	}
	_putchar(last_dig + '0');
	return (last_dig);
}
