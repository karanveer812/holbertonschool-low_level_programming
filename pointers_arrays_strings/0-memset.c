#include "main.h"

/**
 * _memset - set the memory byffer to the given byte
 * @s: Input string
 * @b: desired byte to set
 * @n: number of characters to be replaced
 *
 * Return: desired string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
