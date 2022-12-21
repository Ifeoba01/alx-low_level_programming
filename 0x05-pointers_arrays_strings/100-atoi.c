#include <stdio.h>
#include <limits.h>
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: string
 */
int _atoi(char *s)
{
	char sign = 0;
	unsigned int nm = 0;

	while (!(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
			sign = !sign;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		nm = nm * 10 + (*s - '0');
		s++;
		if (!sign && nm >= INT_MAX)
			return (INT_MAX);
		else if (sign && nm > INT_MAX)
			return (INT_MAX);
	}
	if (sign)
		return (-nm);
	return (nm);
}
