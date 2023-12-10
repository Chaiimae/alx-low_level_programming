#include "lists.h"

/**
 * print_dlistint - Print doubly-linked list
 * @h: address of head node
 *
 * Return: Size of list
 */
size_t print_dlistint(const dlistint_t *h);
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
