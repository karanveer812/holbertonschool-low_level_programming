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

	ch = 'a';

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	putchar (10);

	return (0);
}
