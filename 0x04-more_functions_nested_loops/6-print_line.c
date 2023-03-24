#include "main.h"

/**
 * print_line - funtion print horizontal line
 *
 * Return: return void or no value
 * @n: is the number of lines
 */
void print_line(int n)
{
	int j;

	for (j = 1; j <= n; j++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
