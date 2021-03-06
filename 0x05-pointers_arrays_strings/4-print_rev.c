#include "holberton.h"
/**
 * _strlen - returns length of string
 * @s: input string
 * print_rev - prints a string to stdout
 * @s: array of chars
 * Return: void
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int i, length;

	char chr;

	length = _strlen(s);

	for (i = (length - 1); i >= 0; i--)
	{
		chr = s[i];
		_putchar(chr);
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

