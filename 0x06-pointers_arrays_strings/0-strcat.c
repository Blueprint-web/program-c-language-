#include "main.h"

/**
 * _strcat - srting concatenate function
 * @dest: the destination of the file
 * @src: the source
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, k;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[length] = src[k];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
