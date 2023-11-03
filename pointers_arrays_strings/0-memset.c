#include "main.h"

/**
 * reset_to_98 - reset value of the pointer
 * @n: takes pointer as input
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
