#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Head of the list
 * @index: Position
 * Return: Address of element
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	for (i = 0; head != NULL; ++i, head = head->next)
		if (i == (int) index)
			return (head);
	return (NULL);
}
