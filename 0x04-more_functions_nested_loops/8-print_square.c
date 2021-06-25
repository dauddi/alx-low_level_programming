#include "holberton.h"

/**
 *print_square - prints a square
 *@size - defines square size
 * 
 *Return: void.
 */

void print_square(int size)
{
	int i, count = 0;

	for (i = 0; i < size; i++)
	{
		_putchar(35);
	}
	count++;
	_putchar('\n');

	if (count != size)
	{
		print_square(int size);
	}
}
