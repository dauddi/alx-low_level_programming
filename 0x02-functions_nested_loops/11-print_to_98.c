#include <stdio.h>
#include "holberton.h"

/**
 *print_to_98 - sums two ints
 * @n: user input
 *
 *Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
