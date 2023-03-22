#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i[10] = {'_','p','u','t','c','h','a','r'};
	int j[10] = {'1','2','3','4','5','6','7','8'};

	while (i[10] == j[10])
	{
		putchar(i[10]);
	}

	putchar('\n');
	return (0);
}
