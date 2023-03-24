#include "main.h"

/**
 * print_diagonal - funtion to print line diagonaly
 *
 * Return: return 0 always
 * @n: n count the diagonal line
 */
void print_diagonal(int n)
{
	int j;
	int i;

	for (j = 0; j < n; j++)
	{
		for (i = 1; i <= j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
