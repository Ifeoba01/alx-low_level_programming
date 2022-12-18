#include <stdio.h>
/**
 * main - print sinle digit num
 * Description: print single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
