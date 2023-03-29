#include "main.h"
#include <string.h>

/**
 * puts_half - print half function
 * @str: gets the string
 * Return: void
 */
void puts_half(char *str)
{
	int a, b, i, j;

	a = strlen(str);

	b = a / 2;

	for (i = b, j = 0; i <= a; i++, j++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
