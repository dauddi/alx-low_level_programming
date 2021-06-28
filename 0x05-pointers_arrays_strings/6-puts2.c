#include "holberton.h"
/**
 * puts2 - prints every other character in a string
 * @str: user input string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	char chr;

	for (i = 0; str[i] != '\0'; i+=2)
	{
		chr = str[i];
		_putchar(chr);
	}
	_putchar('\n');
}


