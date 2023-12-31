#include "main.h"
#include <stdio.h>

/**
 * rev_string - output the string in reverse
 * @s: takes string as input
 */
void rev_string(char *s)
{
	char x;
	int n = 0;
	int i = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	i = n - 1;
	n = 0;
	while (n <= i)
	{
		x = s[n];
		s[n] = s[i];
		s[i] = x;
		n++;
		i--;
	}
}
