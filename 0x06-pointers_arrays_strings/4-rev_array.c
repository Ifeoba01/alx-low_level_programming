#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int half = n / 2;
	int right, left, i;

	n -= 1;
	for (i = 0; i < half; i++)
	{
		right = a[i];
		left = a[n - i];
		a[i] = left;
		a[n - i] = right;
	}
}
