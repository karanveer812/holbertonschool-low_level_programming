#include "main.h"

/**
 * rev_string - output the string in reverse
 * @s: takes string as input
 */
void puts_half(char *str)
{
	char x = *str;
	int n = 0;
	int i = 0;

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

	char ch[i];
	int y = 0;

	while (i <= n)
	{
		ch[y] = str[i];
		i++;
		y++;
	}

	_putchar('\n')
}
