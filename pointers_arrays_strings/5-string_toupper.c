#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Convert string to uppercase
 * @str: Take string as an input
 *
 * Return: Converted string
 */
char *string_toupper(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while (i <= (len - 1))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
