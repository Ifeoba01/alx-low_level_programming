#include "main.h"

/**
 *
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int line = 0;
	int i, j;

	if (size > 0)
	{
		while (line < size)
		{
			for (i = size - 1; i > line; line--)
			{
				_putchar(' ');
			}
			for ( j = 0; j < line + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
