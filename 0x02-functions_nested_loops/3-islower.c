#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c - ascii character
 * return - 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
