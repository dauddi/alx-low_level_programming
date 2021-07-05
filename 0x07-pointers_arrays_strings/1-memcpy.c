#include "holberton.h"
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 *@dest: Address of memory to print
 *@src: Size
 *@n : Bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;
	char **p;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	p = &dest;

	return (*p);
}
