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

	while (s[i] != '\0')
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
