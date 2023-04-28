#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: head of linked list (reference to the first node)
 * Return: elements count
 */

size_t print_list(const list_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h != NULL)
	{
		++cnt;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (cnt);
}

