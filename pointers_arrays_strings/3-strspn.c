#include "main.h"
#include <stddef.h>

/**
 * _strspn - find length of prefix
 * @s: Input string
 * @accept: comparision string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0; 
	unsigned int byte = 0;

	while (s[i] != '\0')
	{
		int n = 0;

		while (accept[n] != '\0' && accept[n] == s[i])
		{
			byte++;
			n++;
		}
		i++;
	}
	return (byte);
}
