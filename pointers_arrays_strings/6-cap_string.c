#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Convert string to uppercase
 * @str: Take string as an input
 *
 * Return: Converted string
 */
char *cap_string(char *str)
{
	int len = 0;
	int i = 0;

	while (i <= (len - 1))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
                	|| str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] =='{' || str[i - 1] == '}' || i == 0)
                	{
                        	str[i] = str[i] - 32;
                	}
		}
		i++;
	}

	return(str);
}
