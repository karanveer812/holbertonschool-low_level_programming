#include "main.h"

/**
 * _abs - outputs the absolute value of the number
 * @n: Takes number as input
 *
 * Return: value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return ((n * -1));
	}
}
