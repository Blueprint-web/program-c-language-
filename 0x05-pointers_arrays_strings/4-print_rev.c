#include "main.h"

/**
 * print_rev - print reverser funtion
 * @s: print the string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;
	while (s[b] - 1 != '\0')
	{
		b++;
	}
	for (a = b; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
