#include <stdio.h>
#include <math.h>

/**
 * main - print largest prime number factor
 * Return: 0
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long largestprime = -1;
	unsigned long i;

	while (num % 2 == 0)
		num /= 2;

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largetstPrime = i;
			num /= i;
		}
	}
	if (largestPrime < Num)
		largestPrime = num;
	printf("%lu\n", largestPrice);
	return (0);
}
