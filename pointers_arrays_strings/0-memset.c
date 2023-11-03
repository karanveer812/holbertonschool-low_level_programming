#include "main.h"

/**
 * reset_to_98 - reset value of the pointer
 * @n: takes pointer as input
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char *byte = b;

	while (i <= n)
	{
		*s[i] = *byte;
	}
}
