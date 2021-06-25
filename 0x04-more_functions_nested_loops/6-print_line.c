#include "holberton.h"

/**
 *print_line - prints straight line
 *@n - defines the length of the line
 * 
 *Return: void.
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar('_');
	}
	else 
		_putchar('\n');

	_putchar('\n');
}
