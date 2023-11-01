#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1: First string
 * @s2: second string
 *
 * Return: 0 if same
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n;

	while (x <= y)
	{
		a[x] = a[y];
		x++;
		y--;
	}
}
