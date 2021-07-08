#include "holberton.h"

/**
 * _sqrt_recursion - returns a natural squareroot of a number
 *@n:integer
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	int x, y;
	int *px = &x;

	*px = 1;
	y = x;

	if (n == 1)
	{
		return (1);
	}
	else if (y > n / 2)
	{
		return (-1);
	}
	else if (n / y == y)
	{
		return (y);
	}
	else
	{
		*px += 1;
		return (_sqrt_recursion(n));
	}
}
