#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - number stored in the variable n is positive or negative.
 *Return: 0
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(toupper(chr));

	putchar('\n');

	return (0);
}
