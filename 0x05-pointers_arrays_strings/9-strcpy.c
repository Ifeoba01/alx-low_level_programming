#include "main.h"
/**
 * _strcpy - copy the string by src to the buffer by dest
 * @src: source
 * @dest: destination
 * Return: char with copy of string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
