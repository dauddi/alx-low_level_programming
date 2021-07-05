#include "holberton.h"

/**
 * _memset - fills first bytes of memory with constant byte.
 *@s: user input string
 *@b: Constant byte
 *@n: Size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s = 'b';
		*s++;
	}
	return s;
}
