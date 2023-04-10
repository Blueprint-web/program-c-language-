#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	for (i = 0; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);
		result = result + x;
	}
	if ()
	{
		printf("Error");
	} else
		printf("%d\n", result);
	return(0);
}
