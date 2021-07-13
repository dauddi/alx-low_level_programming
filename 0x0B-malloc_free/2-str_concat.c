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

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int len = strlen(s1) + strlen(s2) + 1;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	{
		s3 = (char *)malloc(sizeof(char) * len);
	}
	if (s3 == NULL)
		return (NULL);
	{
		unsigned int i, j;

		for (i = 0; i < len; i++)
		{
			if (s1[i] == "")
				continue;
			{
				s3[i] = s1[i];

				if (i >= strlen(s1))
				{
					for (j = 0; j < (strlen(s2) + 1); i++)
					{
						s3[i] = s2[j];
					}
				}
			}
		}
	}
}
