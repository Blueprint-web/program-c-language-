#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main funtion to print count
 * @argc: count the argument
 * @argv: print out the character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j;

	for (i = 0; i < argc; i++)
	{
		j = *argv[i];
	}
	printf("%d\n", argc - 1);
	return (j);
}
