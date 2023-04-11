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
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
