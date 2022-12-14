#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - determine if number is positive or negative
 * Description: assign a rand num to d variable n each time it's executed.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
