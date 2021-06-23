#include <stdio.h>

/**
 * sumMultiples - computes sum of all mulpiples of 3 and 5
 *
 * main - prints sum of multiples
 *
 * sumMultiples - computes sum of all mulpiples of 3 and 5
 *
 * @n: user input
 *
 *Return: Always 0
 */

int sumMultiples(int n);

int main(void)
{
	int n = 1024;

	sumMultiples(n);

	return (0);
}

int sumMultiples(int n)
{
	int x;
	int sum = 0;

	for (x = 0; x < n; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
