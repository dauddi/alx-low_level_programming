#include "holberton.h"
/**
 * string_toupper - converts lowercase to uppercase in a string
 * @str: input string
 * Return: char
 */
char *string_toupper(char *str)
{

	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
