#include <stdio.h>

/**
 * main - the main function
 *
 * Return: return an empty value
 */
int main(void)
{
	char gh = 'a', gj = 'f', gk = 'r';
	char gl;

	while (gh <= 'd'&&gj <= 'p')
	{
		gh++&&gj++;
		gh = gh + gj;
		putchar (gh);
	}

	return (0);
}
