#include "holberton.h"
/**
 *_strpbrk - locates the first occurrence in s of any byte the string accept
 *@s: matches one of the bytes in another variable
 *@accept: string pointer
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}
