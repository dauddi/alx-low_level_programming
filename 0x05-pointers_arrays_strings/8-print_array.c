#include <stdio.h>
#include "holberton.h"
/**
 * print_array - print elements of an array of a int type
 *@a:pointer
 *@n:pointer
 */
void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
