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
	int char ch;

	while (x <= y)
	{
		ch = a[x]
		a[x] = a[y];
		a[y] = a[x]
		x++;
		y--;
	}
}
