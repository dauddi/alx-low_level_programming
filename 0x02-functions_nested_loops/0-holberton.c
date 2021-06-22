#include <string.h>
#include "holberton.h"

/**
 *main - number stored in the variable n is positive or negative.
 *Return: 0
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
