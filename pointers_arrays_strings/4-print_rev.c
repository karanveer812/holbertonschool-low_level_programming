#include "main.h"

/**
 * _puts - output the string
 * @str: takes string as input
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len != 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
