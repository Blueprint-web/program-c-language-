#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is the main
 *
 * Return: returns no value
 */
int main(void)
{
	int i;
	char j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
