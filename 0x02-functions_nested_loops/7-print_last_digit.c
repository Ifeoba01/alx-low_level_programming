#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 * Return: integer
 */
int print_last-digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}
