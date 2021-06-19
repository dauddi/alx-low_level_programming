#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - number stored in the variable n is positive or negative.
 *Return: 0
 */
int main(void)
{
	int i;
	char chr;

	for (i = 0; i < 10; i++)
		putchar((i + '0'));

	for (chr = 'a'; chr <= 'f'; chr++)
		putchar(chr);
	putchar('\n');

	return (0);
}
