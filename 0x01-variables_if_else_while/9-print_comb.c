#include <stdio.h>
/**
 * main - print combination of single digit numbers
 * Description: print combination of all single digit numbers with commas
 * Return: always 0
 */
int main(void)
{
	int i = 48;
	
	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);

	return (0);
}
