#include "holberton.h"

/**
 *print_alphabet - prinnts the alphabet followed by a newline
 *Return: void.
 */

void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
