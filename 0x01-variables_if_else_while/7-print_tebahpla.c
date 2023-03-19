#include <stdio.h>

/**
 * main - this is the main cod function
 *
 * Return: no value
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');
	return (0);
}
