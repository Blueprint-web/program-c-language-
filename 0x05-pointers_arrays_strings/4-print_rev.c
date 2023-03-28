#include "main.h"

/**
 * print_rev - print reverser funtion
 * @s: print the string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
