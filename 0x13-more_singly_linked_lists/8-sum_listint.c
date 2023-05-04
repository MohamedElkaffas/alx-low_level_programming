#include "lists.h"

/**
 * sum_listint - Sum of all the data (n) of a listint_t linked list
 * @head: Head of the list
 *
 * Return: s
 **/
int sum_listint(listint_t *head)
{
	int s;

	for (s = 0; head != NULL; head = head->next)
		s += head->n;

	return (s);
}
