#include "main.h"
/**
 * main - prints _putchar
 * Description: prints _putchar
 * Return: 0
 */
int main(void)
{
	char *s = "_putchar\n";
	while (*s)
	{
		putchar(*s++);
	}
	return (0);
}
