#include "main.h"

/**
 * _strlen - check the string
 * @s: count the string
 * Return: returns a.
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
	{
		a++;
	}
	return (a);
}
