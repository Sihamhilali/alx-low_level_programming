#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head of linklist node
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t ct = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ct++;
	}
	return (ct);
}
