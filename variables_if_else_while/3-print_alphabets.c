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

	i = 0;

	while (i < 26)
	{
		putchar ('a' + i);
		i++;
	}

	i = 0;

	while (i < 26)
        {
                putchar ('A' + i);
                i++;
        }
	putchar (10);

	return (0);
}
