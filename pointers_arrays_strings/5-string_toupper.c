#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse a given array
 * @a: Take array as an input
 * @n: Number of elemaents in the arrray
 */
char *string_toupper(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while (i <= (len - 1))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
