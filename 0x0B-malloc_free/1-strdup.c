#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>

/**
 * _strdup - returns a ptr to a new memory location, which has a copy of str
 *
 * @str: input string to be copied
 *
 * Return: A pointer to the array
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	{
		ptr = (char *)malloc(sizeof(char) * strlen(str));
	}
	if (ptr == NULL)
		return (NULL);
	{
		unsigned int i;

		for (i = 0; i < strlen(str); i++)
		{
			ptr[i] = str[i];
		}
		return (ptr);
	}
}
