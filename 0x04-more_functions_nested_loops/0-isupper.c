#include "holberton.h"
/**
 * _isupper - Prints c if upper
 *@c: user input
 * Return: 1 or 0
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
