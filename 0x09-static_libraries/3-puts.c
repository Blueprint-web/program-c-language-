#include "main.h"
#include<stdio.h>
/**
 * _puts - does nothing
 * @str: nothing
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - Entry point
 * _puts - does nothing
 * Return: Always 0 (Success)
 */

int main(void) /*main - function for main entry*/
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}

