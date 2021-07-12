#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints minimun number of possible change
 *@argc: size of argv array
 *@argv: array of strings
 * Return: 0
 */

int main(int argc, char* argv[])
{
	int cents = atoi(argv[1]);
	int count = 0;
	int arr[] = {25, 10, 5, 2, 1};

	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	else if (argc == 2)
	{
		for (i = 0; i < sizeof(arr); i++)
		{
			while (cents / arr[i] > 0)
			{
				cents -= arr[i];
				count++;
			}
		}
		printf("%d\n", count);
	}

	return (0);
	
}
