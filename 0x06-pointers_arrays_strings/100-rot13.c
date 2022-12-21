#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: string
 */
char *rot13(char *s)
{
	char offste, *r = s;

	while (*s)
	{
		offset = (*s & 32) + 65;
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			*s = (*s - offset + 13) % 26 + offset;
		s++;
	}
	return (r);
}
