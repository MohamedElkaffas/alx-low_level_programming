#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Head of the list
 **/
void free_listint(listint_t *head)
{
	listint_t *h;

	for (; head != NULL;)
	{
		h = head;
		head = head->next;
		free(h);
	}

}
