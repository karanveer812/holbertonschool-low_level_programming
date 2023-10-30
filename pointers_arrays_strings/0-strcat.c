#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: The input string
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[n] != '\0')
	{
		dest = dest + src[n];
		_putchar(src[n]);
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
