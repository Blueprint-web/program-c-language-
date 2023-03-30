#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: the array of int to be reversed
 * @n: the number of element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
