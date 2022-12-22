#include "main.h"
/**
 * is_alpha - checks for alphabetic character
 * @c: ascii character
 * Return: 1
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		returm (1);
	}
	else
		return (0);
}
