#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a linked list
 * @h: Pointer to the list_t to print
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *h);
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[%u]%s\n", h->str);
		h = h->next;
		s++;
		else
			printf("[0](nil)\n");
	}
	return (s);
}
