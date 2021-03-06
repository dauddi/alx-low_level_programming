#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of list_t
 * @h: pointer to the head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
