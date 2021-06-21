#include <stdio.h>
/**
 *main - Writing a program that prints numbers from 0 to 99.
 *Return: The value will return 0.
 */

int main(void)
{
	int u, v, w, x, y, z;

	for (y = 0; y < 100; y++)
	{
		for (z = 0; z < 100; z++)
		{
			if (y < z)
			{
				x = z % 10;
				w = z / 10;
				v = y % 10;
				u = y / 10;
				putchar(u + '0');
				putchar(v + '0');
				putchar(' ');
				putchar(w + '0');
				putchar(x + '0');
				if (y == 98 && z == 99)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
