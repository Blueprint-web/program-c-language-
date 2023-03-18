#include <stdio.h>

/**
 * main - this is the alphabet main function
 *
 * Return: return no value
 */
int main(void)
{
	char low;
	char upper;


	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
