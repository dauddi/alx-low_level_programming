#include "holberton.h"

/**
 *print_sign - prints the sign of a number
 * @n: user input to be signed
 *
 *Return: 1, -1 or 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
}
