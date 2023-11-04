#include "main.h"
#include <stddef.h>

/**
 * _strchr - Find character in a string
 * @s: Input string
 * @c: character to find
 *
 * Return: pointer to the character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int n = 0;
	int x = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	while (i < (n + 1))
	{
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
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
