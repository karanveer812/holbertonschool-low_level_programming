#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: takes string as input
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(s[0]);
	}
}
