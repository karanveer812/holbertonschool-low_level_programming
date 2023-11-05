#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: takes string as input
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_strlen_recursion(s + 1);
		return (0 + 1);
	}
	return (_strlen_recursion(s));
}
