#include "holberton.h"
/**
 * swap_int - changes number in memory to 98
 * @a: pointer
 * @b: pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *(&a);
	y = *(&b);

	a = y;
	b = x;
}
