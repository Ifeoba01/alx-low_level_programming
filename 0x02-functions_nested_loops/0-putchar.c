#include "main.h"
/**
 * main - prints _putchar
 * Description: prints _putchar
 * Return: 0
 */
int main(void)
{
	int i;
	char *s = "_putchar\n";
	for (i = 0; i < (int)sizeof(*s); i++)
	{
		putchar(*s + i);
	}
	return (0);
}
