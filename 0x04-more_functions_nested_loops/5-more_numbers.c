#include "holberton.h"

/**
 *more_numbers - prints numbers from 0 to 9 excluding 2 and 4.
 *
 *Return: void.
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
		}
		_putchar((i % 10) + '0');
		_putchar('\n');
	}
}
