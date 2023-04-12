#include "main.h"
/**
 * _puts_recursion - puts string to output
 * @s: accept the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	else if(*s != '\0')
		_puts_recursion(s + 1);
}
