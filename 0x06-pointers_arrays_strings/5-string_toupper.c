#include "main.h"

/**
 * string_topper - turns any giving string to caps
 * @str: the string to be changed
 *
 * Return: str 
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}