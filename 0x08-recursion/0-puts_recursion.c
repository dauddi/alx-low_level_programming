#include "holberton.h"

/**
 * _puts_recursion - prints a string recursively
 *@s:input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + sizeof(*s));
	}
}
