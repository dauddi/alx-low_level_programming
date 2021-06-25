#include "holberton.h"

/**
 *print_line - prints straight line
 *@n - defines the length of the line
 * 
 *Return: void.
 */

void print_diagonal(int n)
{
	int x;

	if (x > 0)
	{
		for (x = n; x > 0; x--)
		{
			_putchar(' ');

		}
		_putchar('\\');
	}
	else 
		_putchar('\n');
}
