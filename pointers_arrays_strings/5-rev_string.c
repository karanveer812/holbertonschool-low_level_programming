#include "main.h"
#include <stdio.h>

/**
 * rev_string - output the string in reverse
 * @s: takes string as input
 */
void rev_string(char *s)
{
	char *pX = s;
	int n = 0;
	int i = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	i = n - 1;
	while (n >= 0)
	{
		s[(i - n)] = pX[n];
		printf("%d", i);
		n--;
	}
}
