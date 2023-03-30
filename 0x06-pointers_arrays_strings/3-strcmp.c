#include "main.h"
/**
 * _strcmp - string compare funtion
 * @s1: variable
 * @s2: second variable
 * Return: return s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
