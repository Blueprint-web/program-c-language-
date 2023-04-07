#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: counter
 * @argv: the programe output
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		return (*argv[i]);
	}
	return (0);
}
