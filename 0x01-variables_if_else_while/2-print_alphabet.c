#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 *main - number stored in the variable n is positive or negative.
 *Return: 0
 */
int main(void)
{
	int i;
	int n;

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0, n = strlen(alphabet); i < n; i++)
	{
		alphabet[i] = tolower(alphabet[i]);
		putchar(alphabet[i]);
	}
}
