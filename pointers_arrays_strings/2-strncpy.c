#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy string from source to destination
 * @dest: destination string
 * @src: The input string
 * @n: take integer as input
 *
 * Return: result string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

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
