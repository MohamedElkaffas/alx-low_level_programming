#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of a linked list (reference to first node)
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
