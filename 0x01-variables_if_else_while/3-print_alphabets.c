#include <stdio.h>
/**
 * main - print letters of the alphabet
 * Description: print letters of alphabet in lowercase then in uppercase
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	i = 97;
	j = 65;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar(10);

	return (0);
}
