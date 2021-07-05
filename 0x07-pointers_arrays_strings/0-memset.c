#include "holberton.h"
/**
 * _memset - fills first bytes of memory with constant byte
 *@s: user input string
 *@b: Constant byte
 *@n: size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
