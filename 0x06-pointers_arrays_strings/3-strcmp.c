#include "holberton.h"
/**
 * _strcmp - Compares the two strings s1 and s2
 * @s1: input value
 * @s2: Second value
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i]  && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
