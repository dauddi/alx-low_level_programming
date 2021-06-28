#include "holberton.h"
/**
 * puts_half - Pulls half of a string..
 *@str: Given variable.
 */
void puts_half(char *str)
{
	int i, n;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	n = (i + 1) / 2;
	for (; str[n] != 0; n++)
	{
		c = str[n];
		_putchar(c);
	}
	_putchar('\n');
}
