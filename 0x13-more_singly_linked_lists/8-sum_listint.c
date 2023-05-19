#include "lists.h"

/**
 * sum_listint - all of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: all all the data
 */
int sum_listint(listint_t *head)
{
	int all = 0;

	while (head != NULL)
	{
		all += head->n;
		head = head->next;
	}
	return (all);
}
