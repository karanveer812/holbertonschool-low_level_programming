#include "main.h"

/**
 * _puts - output the string
 * @str: takes string as input
 */
void print_rev(char *s)
{
	int len = 0;

	while(s[len] != '\0')
	{
		len++;
	}

	while (len != -1)
	{
		_putchar(s[len]);
		len--;
	}
}
