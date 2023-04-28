#include "lists.h"

/**
 * list_len - prints the number of elements of a list_t (linked list)
 * @h: pointer to head node of list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
