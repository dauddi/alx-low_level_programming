#include <string.h>
#include "holberton.h"


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	char str[] = "Holberton", newLine;

	for (int i = 0, len = strlen(str); i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar(newLine);
	return (0);
}
