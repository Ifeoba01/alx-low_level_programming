#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to by dest
 * @src: source
 * @dest: destination
 * Return: char with copy of string
 */
char *_strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; *(src + 1) != '\0'; i++)
	{
		dest[i] = *(src + 1);
	}
	dest[i] = '\0';

	return (dest);
}
