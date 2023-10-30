#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy string from source to destination
 * @dest: destination string
 * @src: The input string
 * @n: take integer as input
 *
 * Return: result string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while(str1[i] == str2[i])
	{
		if(str1[i] == '\0' || str2[i] == '\0')
		{
			break;
		}
		i++;
	}
	if(str1[i] == '\0' && str2[i] == '\0')
	{
		return 0;
	}
	else
	{
		return str1[i] - str2[i];
	}
}
