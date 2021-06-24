#include <stdlib.h>
#include <time.h>
/**
 *positive_or_negative - function to be tested
 *@n - user input
 *
 */

/* betty style doc for function main goes there */
int positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
