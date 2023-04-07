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

	for (i = 0; i <= argc; i++)
	{
		printf("%d\n", argc - 1);
		return (*argv[i]);
	}
	return (0);
}
