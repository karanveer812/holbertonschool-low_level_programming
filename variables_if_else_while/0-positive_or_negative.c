#include <stdlib.h>
#include <time.h>

/** 
 * main - this is the starting pont of the program
 *
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("is negative\n");
	}
	else if (n > 0)
	{
                printf("is positive\n");
	}
	else
	{
                printf("is zero\n");
	}

	return (0);
}
