#include "main.h"

/**
 * Main: Print alphabets
 * Return: 0 if success
 */
int main(void)
{
	char ch = 0;

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
