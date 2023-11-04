#include "main.h"
#include <stdio.h>

/**
 * _memset - set the memory byffer to the given byte
 * @s: Input string
 * @b: desired byte to set
 * @n: number of characters to be replaced
 *
 * Return: desired string
 */
void print_chessboard(char (*a)[8])
{
	int x = 0;

	while (x <= (8*8))
	{
		printf("%s", a[x]);
		x++;
	}
}
