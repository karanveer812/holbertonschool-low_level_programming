#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: Input string
 * @needle: To check occurance in
 *
 * Return: return pointer to the character of the first occurance
 */
char *_strstr(char *haystack, char *needle)
{
	int haystackLen = 0;
	int needleLen = 0;

	while (needle[needleLen] != '\0')
	{
		needleLen++;
	}

	if (needleLen == 0)
	{
		return (haystack);
	}

	while (haystack[haystackLen] != '\0')
	{
		if (haystack[haystackLen] == needle[0])
		{
			int haystackTemp = haystackLen;
			int needleTemp = 0;

			while (haystack[haystackTemp] == needle[needleTemp])
			{
				haystackTemp++;
				needleTemp++;
			}
			if (needleTemp == needleLen)
			{
				char *p = &haystack[haystackLen];

				return (p);
			}
		}
		haystackLen++;
	}

	return (NULL);
}
