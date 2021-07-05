#include "holberton.h"
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of the substring
 *@haystack: Str
 *@needle: Substring
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{

	int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j])
		{
			k++;
			j++;
			if (needle[j] == '\0')
			{
				return (needle);
			}
		}
	}

	return (NULL);
}
