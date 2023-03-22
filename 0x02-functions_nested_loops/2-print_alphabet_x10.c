#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 *
 * Return: the return value is zero
 */
int main(void)
{
	int j;
	int h;

	void print_alphabet_x10();
	for (j = 1; j <= 10; j++)
	{
		for (h = 97; h<= 122; h++)
			{
				putchar(h);
			}
		putchar('\n');
	}
	return (0);
}
