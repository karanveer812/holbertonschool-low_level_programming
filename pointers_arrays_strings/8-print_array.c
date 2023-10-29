#include "main.h"

/**
 * puts2 - print every second character of the string
 *
 * @str: takes string as input
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
}
