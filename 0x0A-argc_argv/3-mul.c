#include <stdio.h>

/**
 *main - prints the product of two ints
 *@argc: size of argv array
 *@argv: array of strings
 * Return: 0
 */

int main(int argc, char* argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else 
	{
		mult = argv[1] * argv[2];

		printf("%d\n", mult);
		return (0);
	}
}
