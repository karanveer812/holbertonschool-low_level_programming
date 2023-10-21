#include "main.h"

/**
 * print_alphabet_x10 - Print Alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch = 'a';

	while(i <= 10)
	{
		while(ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
	}
	_putchar(ch);
}
