#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - number stored in the variable n is positive or negative.
 *Return: 0 //success
 */
int checkForPositivity(int n);
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	checkForPositivity(n);
	return (0);
}

/*checkForPositivity function to check if the n is positive or negetive*/

int checkForPositivity(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
