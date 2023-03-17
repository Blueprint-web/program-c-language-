#include <stdio.h>

/**
 * main - the main block function
 *
 * Return: return empty string
 */
int main(void)
{
	/**
	 * @i,j,k,l,m: variabe name identifier
	 */
	char i;
	int j;
	long int k;
	long long int l;
	float m;
	int stderr;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(m));

	return (0);
}
