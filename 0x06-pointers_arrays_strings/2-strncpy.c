#include "main.h"

/**
 * _strncpy - copies any given string
 * @dest: destination
 * @src: source
 * @n: for null
 * Return: return destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
