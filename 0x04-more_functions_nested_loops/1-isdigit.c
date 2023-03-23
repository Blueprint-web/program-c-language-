#include "main.h"

/**
 * _isdigit - this function check for valid digit
 *
 * Return: returns 1 if true and 0 if false.
 * @c: checks for the equality and inequlity
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	} else
		return (0);
}
