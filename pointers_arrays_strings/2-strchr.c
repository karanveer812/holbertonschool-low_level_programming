#include "main.h"

/**
 * _memset - set the memory byffer to the given byte
 * @s: Input string
 * @b: desired byte to set
 * @n: number of characters to be replaced
 *
 * Return: desired string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			char *p = &s[i];
			return (p);
			break;
		}
		i++;
	}
	return("");
}
