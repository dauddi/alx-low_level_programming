#include "holberton.h"

/**
 *print_line - prints diagonal line
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
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	else 
		_putchar('\n');
}
