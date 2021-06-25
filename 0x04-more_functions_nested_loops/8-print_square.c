#include "holberton.h"
/**
 * print_square - Prints square
 *@size: size of square
 * Return: Always 0
 */
void print_square(int size)
{

	int x, y;

	if (size <= 0)
		_putchar('\n');
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
