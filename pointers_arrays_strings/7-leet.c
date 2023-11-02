#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes the string in 1337
 * @str: Take string as an input
 *
 * Return: Converted string
 */
char *leet(char *str)
{
	int len = 0;
	int i = 0;
	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	char numbers[5] = {'4', '3', '0', '7', '1'};

	while (str[len] != '\0')
	{
		while (i < 5)
		{
			putchar(numbers[i]);
			if (str[len] == letters[i])
			{
				str[len] = numbers[i];
			}
			i++;
		}
		len++;
	}
	return (str);
}
