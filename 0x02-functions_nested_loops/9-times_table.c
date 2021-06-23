#include "holberton.h"

/**
 *times_table - prints the 9 times table starting with 0
 *
 *Return: void
*/

void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			x *= y;
			_putchar((x + '0'));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
 	}
}
