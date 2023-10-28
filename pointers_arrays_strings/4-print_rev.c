#include "main.h"

/**
 * _puts - output the string
 * @str: takes string as input
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len != 0)
	{
		_putchar(str[len]);
		len--;
	}
	_putchar('\n');
}
