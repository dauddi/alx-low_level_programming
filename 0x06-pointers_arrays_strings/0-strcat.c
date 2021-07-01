#include "holberton.h"
/**
 * _strcat- Concatenates dest with src
 *@dest: input string 
 *@src: input string to be appended
 * Return: string
 */
char *_strcat(char *dest, char *src)
{

	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
