#include <stdio.h>
/**
 * main - print alphabet in the reverse order
 * Description: printing alphabet in the reverse order
 * Return: always 0
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
