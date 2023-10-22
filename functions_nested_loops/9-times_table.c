#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int x = 0;
	int y;
	int calc;

	do
	{
		y = 0;
		while (y < 10)
		{
			calc = ((x*y));
			printf("%d", calc);
			if (y < 9)
			{
				printf(",");
				printf(" ");
			}
			y++;
		}
		printf("\n");
		x++;
	}
	while (x < 10);
}
