#include "main.h"

/**
 * puts2 - prints every second item in string
 * @str: parameter holding the function
 * Return: void.
 */
void puts2(char *str)
{
	int a;
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	for (a = 0; a < n; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
