#include "lists.h"

/**
 * print_list - prints all the elements of a list_t (linked list)
 * @h: pointer to head first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
