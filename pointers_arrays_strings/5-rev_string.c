#include "main.h"

/**
 * rev_string - output the string in reverse
 * @s: takes string as input
 */
void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	--len;

	while (len >= 0)
	{
		_puts(_putchar(s[len]));
		len--;
	}
	_puts('\n');
}
