#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program starting point
 *
 * Return: 0 if success
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar (48 + n);
		n++;
	}
	putchar (10);

	return (0);
}
