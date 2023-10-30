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
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (c < n)
	{
		dest[i] = src[c];
		i++;
		c++;
	}

	return (dest);
}
