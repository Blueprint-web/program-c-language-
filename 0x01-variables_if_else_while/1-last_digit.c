#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - the main function.
 *
 * Return: no value
 */
int main(void)
{
	int n;
	int o = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (o > 5)
		printf("last degit of %d is %d and is greater than 5\n", n, o);
	else if(o == 0)
		printf("the last degit of %d is %d and is 0\n", n, o);
	else if (o < 6)
		printf("the last degit of %d is %d and is less than 6 not zero\n", n, o);
	return (0);
}
