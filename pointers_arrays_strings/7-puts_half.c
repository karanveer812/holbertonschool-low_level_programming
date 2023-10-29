#include "main.h"

/**
 * rev_string - output the string in reverse
 * @s: takes string as input
 */
void puts_half(char *str)
{
	int n = 0;
	int i = 0;
	int y = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 0)
	{
		i = (n / 2);
	}
	else
	{
		i = (n - 1) / 2;
	}

	while (i <= n)
	{
		str[y] = str[i];
		_putchar(str[y]);
		i++;
		y++;
	}

	_putchar('\n');
}
