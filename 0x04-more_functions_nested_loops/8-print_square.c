#include "main.h"

/**
 * print_square - print a square of a #
 *
 * Return: return aways 
 * @size: initiate the size of #
 */
void print_square(int size)
{
	int row;
	int colum;

	for (row = 0; row < size; row++)
	{
		for (colum = 0; colum < size; colum++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
