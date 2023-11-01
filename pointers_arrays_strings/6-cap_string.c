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

	while (str[len] != '\0')
	{
		if (str[len - 1] == ',' || str[len - 1] == ';' || str[len - 1] == '.' || str[len - 1] == '!' || str[len - 1] == '?' 
		|| str[len - 1] == '"' || str[len - 1] == '(' || str[len - 1] == ')' || str[len - 1] =='{' || str[len - 1] == '}' || str[len] == '0')
		{
			str[len] -= 32;
		}
		len++;
	}

	return(str);
}
