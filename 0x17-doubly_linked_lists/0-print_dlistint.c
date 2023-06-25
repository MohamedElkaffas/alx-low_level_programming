#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int cnt = 0;

	while (h)
	{
		printf("%d\n", h->n), ++cnt;
		h = h->next;
	}
	return (cnt);
}
