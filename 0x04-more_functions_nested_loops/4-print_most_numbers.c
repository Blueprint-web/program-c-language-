#include "main.h"

/**
 * print_most_numbers - function to print most numbers
 *
 * Return: the return value is none
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
