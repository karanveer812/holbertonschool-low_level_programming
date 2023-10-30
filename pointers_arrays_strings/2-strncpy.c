#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatnate two strings
 * @dest: destination string
 * @src: The input string
 * @n: take integer as input
 *
 * Return: result string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[i] = src[c];
		i++;
		c++;
	}

	return (dest);
}
