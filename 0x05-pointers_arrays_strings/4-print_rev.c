#include "holberton.h"
/**
 * _strlen - returns length of string
 * @s: input string
 * _puts - prints a string to stdout
 * @str: array of chars
 * Return: void
 */

int _strlen(char *s);

void _puts(char *str)
{
	int i, length;

	char chr;

	length = _strlen(str);

	for (i = length; i > 0; i--)
	{
		chr = str[i];
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

