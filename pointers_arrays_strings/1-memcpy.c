#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy string memory from source to destination
 * @dest: destination string
 * @src: The input string
 * @n: take integer as input
 *
 * Return: result string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}

	while (n > c)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
