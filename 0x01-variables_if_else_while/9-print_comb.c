#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is the main function.
 *
 * Return: always return 0.
 */
int main(void)
{
	int i;
	int j = ',';
	int l = ' ';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		putchar(j);
		putchar(l);
	}
	putchar('\n');
	return (0);
}
