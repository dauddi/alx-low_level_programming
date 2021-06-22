#include "holberton.h"

/**
 *print_last_digit - prints the last digit of a number
 * @n: user input to be computed
 *
 *Return: 1, -1 or 0.
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	return (lastDigit);
}
