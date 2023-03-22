#include <stdio.h>
#include <main.h>

/**
 * main - the alphabet function
 *
 * Return: the return value is void
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
