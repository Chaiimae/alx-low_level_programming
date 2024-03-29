#include "lists.h"

/**
 * add_nodeint - Add a node to the top
 * @head: Pointer to first node
 * @n: Value for new node
 *
 * Return: Pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
