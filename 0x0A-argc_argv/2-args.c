#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main funtion
 * @argc: the counter.
 * @argv: the argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
