#include "main.h"
#include <stdio.h>
/**
 * infinite_add - add two numbers
 * @n1: string number 1
 * @n2: string number 2
 * @r: buffer
 * @size_r: size of buffer
 * Return: 0 or pointer to sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, len3 = 0;

	while (*(n1 + len1++))
		;
	while (*(n2 + len2++))
		;
	printf("%d, %d\n", len1, len2);
	return (r);
}
