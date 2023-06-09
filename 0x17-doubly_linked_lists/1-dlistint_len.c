#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: head of doubly linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;

	while (h)
		++cnt, h = h->next;
	return (cnt);
}
