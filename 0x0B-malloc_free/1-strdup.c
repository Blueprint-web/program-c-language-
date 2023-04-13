#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	int size;
	static char *dupli;
	char *string;

	size = strlen(str);
	dupli = malloc(sizeof(char) * size + 1);
	if (dupli == NULL)
	{
		return ((char *)NULL);
	}
	string = dupli;
	while (*str)
	{
		*string = *str;
		string++;
		str++;
	}
	string = '\0';
	return (dupli);
}
