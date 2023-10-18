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
	int i;

	i = 97;

	while (i <= 122)
	{
		putchar (i);
		i++;
	}
	putchar (10);

	return (0);
}
