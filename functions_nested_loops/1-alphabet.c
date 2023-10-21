#include "main.h"

/**
 * Main: Print alphabets
 * Return: 0 if success
 */
void print_alphabet(void)
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
