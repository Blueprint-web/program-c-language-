#include "main.h"

/**
 * cap_string - capitalize string
 * @str: gets the string
 * Return: str
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index] >= 'a' && str[index] <= 'z')
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			index++;
		}
		if (str[index - 1] == ' ' ||
				str[index] == '\t' ||
				str[index] == '\n' ||
				str[index] == ',' ||
				str[index] == ';' ||
				str[index] == '.' ||
				str[index] == '!' ||
				str[index] == '?' ||
				str[index] == '"' ||
				str[index] == '(' ||
				str[index] == '{' ||
				str[index] == '}' ||
				str[index] == ')' ||
				index == 0)
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
