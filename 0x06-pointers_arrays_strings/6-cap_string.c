#include "main.h"
/**
 * cap_string - capitalzes all word of a string
 * @s: string
 * Return: string array
 */
char *cap_string(char *s)
{
	int i;
	int previous;

	for (i = 0; s[i] != '\0'; i++)
	{
		previous = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[previous] >= 9 && s[previous] <= 10)
				s[i] = s[i] - 32;
			else if (s[previous] >= 32 && s[previous] <= 34)
				s[i] = s[i] - 32;
			else if (s[previous] >= 40 && s[previous] <= 41)
				s[i] = s[i] - 32;
			else if (s[previous] == 46)
				s[i] = s[i] - 32;
			else if (s[previous] == 59)
				s[i] = s[i] - 32;
			else if (s[previous] == 123 || s[previous] == 125)
				s[i] = s[i] - 32;
		}
	}

	return (s);
}
