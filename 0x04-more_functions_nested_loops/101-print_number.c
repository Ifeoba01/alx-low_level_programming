#include "main.h"
#include <math.h>

/**
 * power - prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	int lastDigit;

	if (n < 0)
	{
		_putchar('-');
		lastDigit = n % 10 * -1;
		n = n / -10;
		if (n > 0)
			print_number(n);
		_putchar('0' + lsatDigit);
	}
	else if (n < 10)
		_putchar('0' + n % 10);
	else
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
