#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head of linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h != NULL)
	{
		++cnt;
		h = h->next;
	}

	return (cnt);
}
