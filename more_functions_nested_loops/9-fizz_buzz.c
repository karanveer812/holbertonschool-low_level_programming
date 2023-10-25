#include <stdio.h>

/**
 *  print_square - prints a square
 *  @size: take number as an input
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else {
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
