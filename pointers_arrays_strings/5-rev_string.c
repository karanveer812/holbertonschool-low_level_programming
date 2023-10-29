#include "main.h"
#include <stdio.h>

/**
 * rev_string - output the string in reverse
 * @s: takes string as input
 */
void rev_string(char *s)
{
	int n = 0;
	int i = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	i = n - 1;
	while (n < i)
	{
		s[(i - n)] = s[i];
		n++;
		i--;
	}
}
