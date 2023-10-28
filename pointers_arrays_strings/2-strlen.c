#include "main.h"

/**
 * _strlen - output the string length
 * @s: takes string as input
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s[len] != '\0')
	{
		len++;
	}
	return (len);
}
