#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - number stored in the variable n is positive or negative.
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit = n % 10;

	if (lastDigit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);

	return (0);
}
