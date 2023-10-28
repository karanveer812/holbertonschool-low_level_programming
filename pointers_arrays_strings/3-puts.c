#include "main.h"

/**
 * _strlen - output the string length
 * @s: takes string as input
 *
 * Return: Length of the input string
 */
noid _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
	}
}
