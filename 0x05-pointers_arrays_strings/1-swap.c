#include "main.h"

/**
 * swap_int - swap any giving int
 *@a: swaps to B
 *@b: swaps to a
 * Return void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
