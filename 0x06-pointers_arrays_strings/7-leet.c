#include "main.h"

/**
 * leet - function that chages some string to number
 * @str: get the input string
 * Return: return the output string
 */
char *leet(char *str)
{
	int i = 0, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
		}
	}
	return (str);

}
