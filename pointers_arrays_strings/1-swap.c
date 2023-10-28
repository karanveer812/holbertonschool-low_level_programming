#include "main.h"

/**
 * swap_int - swap values of the pointers
 * @a: takes pointer value as input
 * @b: takes pointer value as input
 */
void swap_int(int *a, int *b)
{
	int x = *b;

	*b = *a;
	*a = x;
}
