#include "lists.h"

/**
 * reverse_listint - reverses an int list
 * @head: address of pointer to first node
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
