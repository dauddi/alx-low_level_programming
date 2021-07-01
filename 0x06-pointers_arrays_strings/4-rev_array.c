#include "holberton.h"
/**
 * reverse_array - reverse the contents of an array.
 * @a: input
 * @n: input
 */
void reverse_array(int *a, int n)
{

	int i;
	int tmp, j;

	j = n / 2;

	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
