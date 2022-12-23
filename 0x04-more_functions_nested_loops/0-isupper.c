#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: ASCII value
 * Return: 1 for uppercase amd 0 for every other thing
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
