#include "holberton.h"
/**
*print_last_digit - Returns the value of the last digit of a number.
*@n: user input
*
* Return: lastDigit.
**/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = (n % 10) * -1;
	}
	else
	{
		lastDigit = n % 10;
	}
	_putchar (lastDigit + '0');
	return (lastDigit);
}
