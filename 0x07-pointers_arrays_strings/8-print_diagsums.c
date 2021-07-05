#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals of a matrix
 * @a: matrix
 * @size: size of matrix
 *
 */

void print_diagsums(int *a, int size)
{

	int i = 0, j = 0, diag_one = 0, diag_two = 0;

	for (i = 0; i < size * size; i++)
	{
		diag_one += *(a + i);
		i += size;
	}
	for (j = 0; j < size; j++)
	{
		diag_two += *(a + ((size - 1) - j));
		a += size;
	}

	printf("%i, %i\n", diag_one, diag_two);
}
