#include "holberton.h"

/**
 *print_last_digit - prints the last digit of a number
 * @n: user input to be computed
 *
 *Return: 1, -1 or 0.
 */

void checkDigits(char h);

void jack_bauer(void)
{
	char h = 0;
	char m = 0;

	do
	{
		checkDigits(h);
		_putchar(h +'0');
		_putchar(':');
		checkDigits(m);
		_putchar(m + '0');
		_putchar('\n');

		m++;

		if (m == 60)
		{
			h++;
			m -= 59;
		}
	}while(h < 23 && m != 59);
}

void checkDigits(char h)
{
	if (!(h % 100))
	{
		_putchar('0');
	}
}
