#include "main.h"

/**
 * puts2: print every second character of the string
 * @str: takes string as input
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
}
