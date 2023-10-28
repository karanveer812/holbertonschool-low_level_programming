#include "main.h"

/**
 * _puts - output the string
 * @str: takes string as input
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
}
