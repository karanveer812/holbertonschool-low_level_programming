#include "main.h"
#include <stddef.h>

/**
 * _strchr - Find character in a string
 * @s: Input string
 * @c: character to find
 *
 * Return: pointer to the character
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int byte = 0;

	while (s[i] != '\0')
	{
		int n = 0;

		while (accept[n] != '\0')
		{
			if (s[i] == accept[n])
			{
				byte++;
			}
			n++;
		}
		i++;
	}
	return (byte);
}
