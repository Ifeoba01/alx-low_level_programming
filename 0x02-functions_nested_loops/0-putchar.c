#include "main.h"
/**
 * main - prints _putchar
 * Description: prints _putchar
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char text[10] = "_putchar";
	
	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
