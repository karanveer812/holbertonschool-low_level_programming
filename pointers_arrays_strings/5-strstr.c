#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: Input string
 * @accept: string to confirm
 *
 * Return: return pointer to the character
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int x = 0;
	int haystackLen = 0;
	int needleLen = 0;

	while (needle[needleLen] != '\0')
	{
		needleLen++;
	}

	while (haystack[haystackLen] != '\0')
	{
		if (haystack[haystackLen] == needle[0])
		{
			int haystackTemp = haystackLen;
			int needleTemp = 0;

			while (haystack(haystackTemp) == needle(needleTemp))
			{
				haystackTemp++;
				needleTemp++;
			}
			if (needleTemp == needleLen)
			{
				return (haystack[haystackLen]);
			}
		}
		haystackLen++;
	}

	return (NULL);
}
