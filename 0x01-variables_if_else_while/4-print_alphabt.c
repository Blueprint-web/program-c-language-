#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the main function
 *
 * Return: return an empty value
 */
int main(void)
{
	char i;
	int e = 'e';
	int q = 'q';

	for (i = 'a'; i <= 'z'; i++)
	{
		if(i != e && i != q)
			putchar(i);
	}
	putchar('\n');

	return (0);
}
