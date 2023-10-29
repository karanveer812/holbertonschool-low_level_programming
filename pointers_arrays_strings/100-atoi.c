#include "main.h"
#include <stdio.h>

/**
 *  _strcpy - copy string from source to destination
 * @dest: destination variable
 * @src: source string
 *
 * Return: copies string to the variable
 */
int _atoi(char *s)
{
	int n = 0;
	int i = 0;

	while (s[n] != '\0')
	{
		if ((s[n] >= '0' && s[n] <= '9') || s[n] == '+' || s[n] == '-')
		{
			s[i] = s[n];
			i++;
		}
		n++;
	}
	puts(s);

	return (0);
}
