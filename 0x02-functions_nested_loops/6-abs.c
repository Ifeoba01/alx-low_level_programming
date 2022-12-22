#include "main.h"
/**
 * _abs - computes the absollute value of an integer
 * @n: integer
 * Return: integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
		return (n);
}
