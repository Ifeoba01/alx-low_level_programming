#include "main.h"
/**
 * _strlen - length of string
 * @s: string
 * ReturnL length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i = (len % 2 == 0) ? len / 2 : len / 2 + 1;

	for (; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
