#include "holberton.h"
#include <stdio.h>

/**
 * main  - Prints 1 to 100 excluding multiples of 3 and 5
 *
 * Return: 0
 *
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			if (a % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
