#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, max, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	if (max % 2 == 1)
		n = (length_of_the_string - 1) / 2;
	_putchar('\n');
}
