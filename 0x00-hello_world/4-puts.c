#include <stdio.h>

/**
 * initializing a string and printing it out without using printf
 * @str: inputs the string 
 * @printf: prints nothing
 * return: value will be zero
 */
int main(void)
{
	/**
	 * this is the string
	 */
	char str[] = "\"Programming is like building a multilingual puzzle";

	/**
	 * this is the print out
	 * using put
	 */
	puts(str);
	fprintf(stderr, " ");
	return(0);
}
