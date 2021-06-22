#include "holberton.h"

/**
 *jack_bauer - prints time from 00:00 to 23:53
 *
 * checkDigits - checks number of digits
 * @h: input to chechDigits function
 *
 *Return: 1, -1 or 0.
 */

void checkDigits(char h);

void jack_bauer(void)
{
	char h = 0;
	char m = 0;

	do {
		checkDigits(h);
		_putchar(h);
		_putchar(':');
		checkDigits(m);
		_putchar(m);
		_putchar('\n');

		m++;

		if (m == 60)
		{
			h++;
			m -= 59;
		}
	} while (h < 23 && m != 59);
}

void checkDigits(char h)
{
	if (!(h % 100))
	{
		_putchar('0');
	}
}
