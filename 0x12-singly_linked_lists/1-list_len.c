#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - returns the  no. of nodes in a list
 * @h:linked list
 * Return: no. of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
