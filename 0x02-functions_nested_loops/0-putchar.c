#include "main.h"
/**
 * main - prints _putchar
 * Description: prints _putchar
 * Return: 0
 */
int main(void)
{
	char text[10] = "Alphabet";
	int i = 0;

	for (i = 0; i < 9; i ++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
