#include "main.h"
#include <stdio.h>

/**
 *  _atoi - extract number from string
 * @s: source string
 *
 * Return: number extracted
 */
int _atoi(char *s)
{
	int n = 0;
	int sign = 1;
	long long result = 0;

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

	return (sign * result);
}
