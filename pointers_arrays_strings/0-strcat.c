#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: The input string
 */
char *_strcat(char *dest, char *src)
{
	int n, i = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n] = dest[n] + src[i];
		n++;
		i++;
	}
	return (dest);
}
