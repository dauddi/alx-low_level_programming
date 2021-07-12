#include <stdio.h>

/**
 *main - prints number of args passed
 *@argc: size of argv array
 *@argv: array of strings
 * Return: 0
 */

int main(int argc, char* argv[])
{
	if (argc > 1)
		printf("%i\n", (argc - 1));
	else 
		printf("0");

	(void)argv;
	return (0);
}
