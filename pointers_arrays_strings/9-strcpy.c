#include "main.h"
#include <stdio.h>

/**
 *  _strcpy - copy string from source to destination
 * @dest: destination variable
 * @src: source string
 *
 * Return: copies string to the variable
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
