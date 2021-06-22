#include "holberton.h"

/**
 *_abs - computes the absolute value of an integer
 * @n: user input to be computed
 *
 *Return: 1, -1 or 0.
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
