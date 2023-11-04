#include "main.h"
#include <stddef.h>

/**
 * _strchr - Find character in a string
 * @s: Input string
 * @c: character to find
 *
 * Return: pointer to the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	while (s[i] <= n)
	{
		if (s[i] == c)
		{
			char *p = &s[i];

			return (p);
		}
		i++;
	}
	return (NULL);
}
