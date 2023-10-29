#include "main.h"

/**
 * rev_string - output the string in reverse
 * @s: takes string as input
 */
void rev_string(char *s)
{
	int len = 0;
	int rev = 0;
	char* pX;

	while (s[len] != '\0')
	{
		len++;
	}

	rev = len;

	while (len > (rev - len))
	{
		pX = &s[len];
		s[len] = s[(rev - len)];
		s[(rev - len)] = *pX;
		len--;
	}
}
