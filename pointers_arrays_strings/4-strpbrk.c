#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: Input string
 * @accept: string to confirm
 *
 * Return: return pointer to the character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	while (i < (n + 1))
	{
		int x = 0;

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
