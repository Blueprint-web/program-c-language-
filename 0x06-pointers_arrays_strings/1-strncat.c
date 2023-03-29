#include "main.h"

/**
 * _strncat - cocatenate string li strcat
 * @dest: destination of string
 * @src: source string
 * @n: never mind null
 * Return: return destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	while (dest[length])
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';

	return (dest);
}
