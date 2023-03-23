#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code for upper case.
 *
 * Return: return the value of _isupper.
 * @c: here we decleare the mode of our function
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else
		return (0);
}
