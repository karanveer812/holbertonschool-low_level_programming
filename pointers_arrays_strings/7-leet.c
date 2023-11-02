#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Convert string to uppercase
 * @str: Take string as an input
 *
 * Return: Converted string
 */
char *leet(char *str)
{
	int len = 0;
	int i = 0;
	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	char numbers[5] = {4, 3, 0, 7, 1};

	while (str[len] != '\0')
	{
		while (i < 5)
		{
			putchar(str[len]);
			putchar(letters[i]);
			if (str[len] == letters[i])
			{
				str[len] = numbers[i];
				i++;
			}
		}
		len++;
	}
	return (str);
}
