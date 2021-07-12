#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the product of two ints
 *@argc: size of argv array
 *@argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)

			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	return (0);
}
