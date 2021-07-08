#include "holberton.h"

/**
 * _pow_recursion - returns the factorial of a given number
 *@x:base number
 *@y:superscript
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y--));
}
