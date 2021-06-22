#include "holberton.h"

/**
 *print_alphabet_x10 - prints alphabet ten times
 *Return: void.
 */

void print_alphabet_x10(void)
{
	char chr;

	int i;

	for (i = 0; i < 10; i++)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
	}
}
