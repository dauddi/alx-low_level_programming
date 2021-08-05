#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b:points to a string of 0 and 1 chars
 *
 * Return: converted number
 * in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (b == 0 || b == 1 && !(null))
	{
		
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
		}
		for (i = 0; b[i] != '\0'; i++)
		{
			num <<= 1;
			if (b[i] == '1')
				num += 1;
		}
		return (num);
	}
	return (0);
}
