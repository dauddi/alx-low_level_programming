#include <string.h>
#include "holberton.h"

/**
 *main - number stored in the variable n is positive or negative.
 *Return: 0
 */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char str[] = "Holberton", newLine = '\n';

	int i, len;

	for (i = 0, len = strlen(str); i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar(newLine);
	return (0);
}
