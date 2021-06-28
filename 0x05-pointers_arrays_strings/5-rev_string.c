#include "holberton.h"
/**
 * rev_string - function that reverses a string
 * @s: user input string
 * _strlen - returns length of string
 * @str: input string
 * rev_string - prints a string to stdout
 * @s: array of chars
 * Return: void
 */

int _strlen(char *str);

void print_rev(char *s);

void rev_string(char *s)
{
	s = print_rev(s);

	return;
}

void print_rev(char *s)
{
	int i, length;

	char chr;

	length = _strlen(str);

	for (i = (length - 1); i >= 0; i++)
	{
		chr = str[i];
		_putchar(chr);
	}
	_putchar('\n');
}

int _strlen(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}

