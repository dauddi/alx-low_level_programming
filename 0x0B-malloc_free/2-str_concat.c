#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <string.h>

/**
 * _strdup - returns memory location for new concatenated string
 *
 * @s1: string one
 * @s2: string two
 * Return: A pointer to the array
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, z, w;

	if (!s1) /* if is NOT NULL */
		s1 = "";
	if (!s2) /* if is NOT NULL */
		s2 = "";

	i = 0;
	while (s1[i])
		i++;

	j = 0;
	while (s2[j])
		j++;

	p = malloc(sizeof(char) * (i + j + 1)); /* + 1 is to put NULL character */
	if (!p)
		return ('\0');

	z = 0;
	while (z < i)
	{
		p[z] = s1[z];
		z++;
	}
	w = 0;
	while (z <= (i + j))
	{
		p[z] = s2[w];
		z++;
		w++;
	}
return (p);
}
