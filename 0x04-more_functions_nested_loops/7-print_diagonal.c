#include "holberton.h"

/**
 *print_line - prints diagonal line
 *@n - defines the length of the line
 * 
 *Return: void.
 */

void print_diagonal(int n)
{
	int x, y;

	if (x > 0)
	{
		for (x = n; x > 0; x--)
		{
			for (y = 0; y < n; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}	
	}
	else
	{
		_putchar('\n');
	}
}
