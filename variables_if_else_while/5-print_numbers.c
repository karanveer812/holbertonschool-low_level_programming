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
	char ch;

	ch = '0';

	while (ch <= '9')
	{
		putchar (ch);
		ch++;
	}
	putchar (10);

	return (0);
}
