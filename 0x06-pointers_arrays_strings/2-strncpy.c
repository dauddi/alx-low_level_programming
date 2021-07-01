#include "holberton.h"
/**
 * _strncpy - copies the string pointed to by src to dest.
 * @dest: input string
 * @src: input string to be appended
 * @n: number
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
