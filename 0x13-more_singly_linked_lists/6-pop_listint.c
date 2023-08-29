#include "lists.h"

/**
 * pop_listint - Pops head node of list
 * @head: Adress of pointer to first node
 *
 * Return: Value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
