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
	int sign = 1;
	int result = "";

	while (s[n] != '\0')
	{
		if (s[n] >= '0' && s[n] <= '9')
		{
			result = result * 10 + s[n] - '0';
		}
		else if (s[n] == '+')
		{
			sign = sign * 1;
		}
		else if (s[n] == '-')
		{
			sign = sign * -1;
		}
		n++;
	}
	printf("%d, %d, ", sign, result);

	return (0);
}
