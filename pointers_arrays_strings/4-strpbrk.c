#include "main.h"
#include <stddef.h>

/**
 * _strchr - Find character in a string
 * @s: Input string
 * @c: character to find
 *
 * Return: pointer to the character
 */
char *strbrk(char *s, char *accept)
{
	int i = 0;
	int n = 0;
	itn x = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	while (i < (n + 1))
	{
		while (c[x] != '\0')
		{
			if (s[i] == c[x])
			{
				char *p = &s[i];
				return (p);
			}
			x++;
		}
		i++;
	}

	return (NULL);
}