#include "holberton.h"
/**
 * _strlen - changes number in memory to 98
 * @s: array of chars,, string.
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
