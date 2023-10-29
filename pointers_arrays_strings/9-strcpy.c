#include "main.h"
#include <stdio.h>

/**
 * print_array - n number of integers from an array
 * @a: takes int as input
 * @n: takes int as input
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}
