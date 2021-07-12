#include <stdio.h>

/**
 *main - prints the sum of positive ints
 *@argc: size of argv array
 *@argv: array of strings
 * Return: 0
 */

int main(int argc, char* argv[])
{
	int sum = 0;

	if (argc > 1)
	{
		int i;

		for (i = 1; i < argc; i++)
		{
			if (typeof(argv[i]) != int || argv[i] < 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += argv[i];
			}
		}
		printf("%d\n", sum);
	}
	else 
	{
		printf("0\n")
	}
	return (0);
}
