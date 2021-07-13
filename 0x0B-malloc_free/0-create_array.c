#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of a spacified size and is populated with a char
 *
 * @size: size of the array
 * @c: character to populate the array
 *
 * Return: A pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	{
		char *str = (char *)malloc(sizeof(char) * size);
	}

	if (str == NULL) 
		return (NULL);
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			str[i] = c;
		return (str);
	}
}
