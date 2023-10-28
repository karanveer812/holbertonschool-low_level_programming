#include "main.h"

/**
 * reset_to_98 - reset value of the pointer
 * @n: takes pointer as input
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*b = y;
	*a = x;
}
