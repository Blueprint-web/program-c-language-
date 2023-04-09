#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the counter
 * @argv: the string converted to int
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	for (i = 1; i < argc; i++)

	{
		int x = atoi(argv[i]);

		result = result * x;
	}
	if (argc != 3)
	{
		printf("Error\n");
	} else
		printf("%d\n", result);
	return (0);
}
