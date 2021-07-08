#include "holberton.h"
/**
 * increment - helper function
 * @n: int
 * @i: int
 * Return: increment
 */
int increment(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (increment(n, i + 1));
}
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: int
 * Return: increment
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (increment(n, 1));
}
