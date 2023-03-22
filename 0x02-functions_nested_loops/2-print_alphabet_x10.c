#include <stdio.h>

/**
 * main - the main function
 *
 * Return: the return value is zero
 */
int main(void)
{
	int i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 96; i <= 122; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
	return (0);
}
