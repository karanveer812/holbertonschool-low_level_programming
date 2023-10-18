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
	int num;

	num = 0;

	while (num <= 15)
	{
		if (num < 10)
			putchar('0' + num);
		else
			putchar('a' + num - 10);
		num++;
	}
	putchar(10);
	return (0);
}
