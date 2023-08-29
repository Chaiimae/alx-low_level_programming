#include "lists.h"

/**
 * listint_len - Prints a linked lists
 * @h: Linked list of type listint_t traverse
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
