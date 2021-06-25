#include "holberton.h"

/**
 *print_line - prints straight line
 *@n - defines the length of the line
 * 
 *Return: void.
 */

void print_line(int n)
{

	int x = 0;

	if (n > 0)
	{
		while (n > x)
		{
			_putchar('_');
			x++;
		}
	}
	_putchar('\n');
}
