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
	int a;

	i = 97;
	a = 65;

	while (i <= 122)
	{
		putchar (i);
		i++;
	}
	while (a <= 90)
        {
                putchar (a);
                a++;
        }
	putchar (10);

	return (0);
}
