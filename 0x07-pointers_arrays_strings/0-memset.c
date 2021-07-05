#include "holberton.h"

char *_memset(char *s, char b, unsigned int n)
{
	if (n)
	{
		*s = 'b';
		*s++;
		n--;
	}
	return s;
}
